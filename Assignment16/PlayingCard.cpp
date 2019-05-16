#include "PlayingCard.h"
#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

vector<string> cards = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                  "Jack", "Queen", "King"};
vector<int> ranks = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
string suits[] = {"Clubs", "Spades", "Hearts", "Diamonds"};

PlayingCard::PlayingCard() {
  drawCard();
}

PlayingCard::PlayingCard(std::string inputCard, std::string inputSuit) {
  card = inputCard;
  suit = inputSuit;
  for (int i = 0; i < cards.size(); i++) {
    if (card == cards[i]) {
      rank = ranks[i];
    }
  }
}

void PlayingCard::drawCard() {
  int randInt;
  randInt = rand() % 13;
  card = cards[randInt];
  rank = ranks[randInt];
  suit = suits[rand() % 4];
}

void PlayingCard::printCard() {
  cout << getCard() << " of " << getSuit();
}

std::string PlayingCard::getCard() {
  return card;
}

std::string PlayingCard::getSuit() {
  return suit;
}

int PlayingCard::getRank() {
  return rank;
}
