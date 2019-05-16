#include<vector>
#include "PlayingCard.h"
#include "deck.h"
#include<ctime>


vector<string> Deck::cards = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                  "Jack", "Queen", "King"};
vector<int> Deck::ranks = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
string Deck::suits[] = {"Clubs", "Spades", "Hearts", "Diamonds"};

Deck::Deck() {
  drawn = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < cards.size(); j++) {
      deck.push_back(PlayingCard(cards[j], suits[i]));
    }
  }
}

int Deck::getDrawn() { return drawn; }

void Deck::shuffle() {
  for (int i = 0; i < 1000; i++) {
    int randInt = (rand() % (52 - drawn)) + drawn;
    int randInt2 = (rand() % (52 - drawn)) + drawn;
    PlayingCard tempCard = deck[randInt];
    deck[randInt] = deck[randInt2];
    deck[randInt2] = tempCard;
  }
}

PlayingCard Deck::draw() { drawn++; return deck[drawn - 1]; }

void Deck::reset() { drawn = 0; shuffle(); }
