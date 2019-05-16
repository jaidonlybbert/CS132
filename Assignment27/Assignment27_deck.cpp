#include<vector>
#include<ctime>
#include "PlayingCard.h"
#include "deck.h"
#include "hand.h"

vector<string> Deck::cards = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                  "Jack", "Queen", "King" };
vector<int> Deck::ranks = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
string Deck::suits[] = { "Clubs", "Spades", "Hearts", "Diamonds" };

Deck::Deck() {
  drawn = 0;
  deckSize = 51;
  PlayingCard* cardPointer;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < cards.size(); j++) {
      cardPointer = new PlayingCard(cards[j], suits[i]);
      deck.push_back(cardPointer);
    }
  }
}

int Deck::getDrawn() { return drawn; }

void Deck::shuffle() {
  for (int i = 0; i < 1000; i++) {
    int randInt = rand() % deckSize;
    int randInt2 = rand() % deckSize;
    PlayingCard* tempCard = deck[randInt];
    deck[randInt] = deck[randInt2];
    deck[randInt2] = tempCard;
  }
}

void Deck::deal(Hand* player) {
  player->cardsInHand.push_back(deck[deckSize]);
  deck.pop_back();
  deckSize--;
}

void Deck::replaceInDeck(PlayingCard* cardPointer) {
  deck.push_back(cardPointer);
}

PlayingCard Deck::draw() { drawn++; return *deck[drawn - 1]; }

void Deck::reset() { drawn = 0; shuffle(); }
