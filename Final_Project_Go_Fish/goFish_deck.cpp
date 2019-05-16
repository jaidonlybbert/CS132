#include<vector>
#include<ctime>
#include "PlayingCard.h"
#include "deck.h"
#include "hand.h"
#include "player.h"


// Static reference lists of card attributes
vector<string> Deck::cards = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                  "Jack", "Queen", "King" };
vector<int> Deck::ranks = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
string Deck::suits[] = { "Clubs", "Spades", "Hearts", "Diamonds" };


// Constructor
Deck::Deck() {
  deckSize = 51;
  PlayingCard* cardPointer;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < cards.size(); j++) {
      cardPointer = new PlayingCard(cards[j], suits[i]);
      deck.push_back(cardPointer);
    }
  }
}


// Accessors
int Deck::getSize() const { return deckSize; }

PlayingCard* Deck::getTopCard() const { return deck[deckSize]; }

// Shuffle deck
void Deck::shuffle() {
  for (int i = 0; i < 1000; i++) {
    int randInt = rand() % deckSize;
    int randInt2 = rand() % deckSize;
    PlayingCard* tempCard = deck[randInt];
    deck[randInt] = deck[randInt2];
    deck[randInt2] = tempCard;
  }
}


// Deals a card from the deck
void Deck::deal(Hand* hand) {
  hand->addCard(deck[deckSize]);
  deck.pop_back();
  deckSize--;
}

void Deck::deal(Player* player) {
  player->addCard(deck[deckSize]);
  deck.pop_back();
  deckSize--;
}


// Returns a card to the deck
void Deck::replaceInDeck(PlayingCard* cardPointer) {
  deck.push_back(cardPointer);
}
