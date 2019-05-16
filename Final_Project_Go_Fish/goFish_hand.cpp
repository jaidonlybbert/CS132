#include<iostream>
#include<vector>
#include "hand.h"
#include "deck.h"
#include "PlayingCard.h"

using namespace std;


// Constructor
Hand::Hand() {
  cardsInHand.clear();
}


// Accessors
int Hand::getSize() const { return cardsInHand.size(); }


// Add card to hand
void Hand::addCard(PlayingCard* cardPointer) {
  cardsInHand.push_back(cardPointer);
}


// Remove card from hand
void Hand::removeCard(int index) {
  cardsInHand.erase(cardsInHand.begin() + index);
}

void Hand::removeCard(PlayingCard* card) {
  for (int i = 0; i < cardsInHand.size(); i++) {
    if (cardsInHand[i]->getSuit() == card->getSuit() &&
        cardsInHand[i]->getCard() == card->getCard() &&
        cardsInHand[i]->getRank() == card->getRank()) {
      removeCard(i);
    }
  }
}

void Hand::removeCard(string suit, string faceValue, Deck* returnDeck) {
  for (int i = 0; i < cardsInHand.size(); i++) {
    if (cardsInHand[i]->getSuit() == suit && cardsInHand[i]->getCard() == faceValue) {
      returnDeck->replaceInDeck(cardsInHand[i]);
      cardsInHand.erase(cardsInHand.begin() + i);
      return;
    }
  }
}

void Hand::removeAllCards(Deck* returnDeck) {
  for (int i = 0; i < cardsInHand.size(); i++) {
    returnDeck->replaceInDeck(cardsInHand[i]);
  }
  cardsInHand.clear();
}

void Hand::removeAllCards(int cardIndex) {
  int j = cardsInHand.size();
  for (int i = 0; i < j; i++) {
    if (cardsInHand[i]->getCardIndex() == cardIndex) {
      cardsInHand.erase(cardsInHand.begin() + i);
      i--;
      j--;
    }
  }
}


// Print contents of hand
void Hand::printHand() {
  if (cardsInHand.size() != 0) {
    std::cout << "\nCards in hand:\n";
    for (int i = 0; i < cardsInHand.size(); i++) {
      cardsInHand[i]->printCard();
      cout << endl;
    }
  }
}


// Checks for card in possesion
bool Hand::hasCard(string card) {
  for (int i = 0; i < cardsInHand.size(); i++) {
    if (cardsInHand[i]->getCard() == card) {
      return true;
    }
  }
  return false;
}

// Pass card to another hand
void Hand::cardToNewHand(std::string card, Player* toPlayer) {
  for (int i = 0; i < cardsInHand.size(); i++) {
    if (cardsInHand[i]->getCard() == card) {
      cardsInHand[i]->printCard();
      std::cout << " handed over.\n";

      toPlayer->addCard(cardsInHand[i]);
      removeCard(i);
      i = 0;
    }
  }
}
