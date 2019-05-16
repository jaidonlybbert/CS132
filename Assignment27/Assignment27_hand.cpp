#include<iostream>
#include<vector>
#include "hand.h"
#include "deck.h"

using namespace std;


Hand::Hand() {
  cardsInHand.clear();
}


void Hand::addCard(PlayingCard* cardPointer) {
  cardsInHand.push_back(cardPointer);
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


void Hand::printHand() {
  std::cout << "\nCards in hand:\n";
  for (int i = 0; i < cardsInHand.size(); i++) {
    cardsInHand[i]->printCard();
    cout << endl;
  }


  /*for (int i = 0; i < cardsInHand.size(); i++) {
    std::cout << cardsInHand[i]->getCard() << " of " << cardsInHand[i]->getSuit() << endl;
  }*/
}
