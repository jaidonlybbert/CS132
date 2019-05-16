#ifndef DECK_H
#define DECK_H

#include<iostream>
#include<vector>
#include "PlayingCard.h"
#include "player.h"
using namespace std;

class Hand;
class PlayingCard;
class Player;

class Deck {
  int deckSize;
public:
  vector<PlayingCard*> deck;
  static vector<std::string> cards;
  static vector<int> ranks;
  static std::string suits[4];

  // Constructors
  Deck();

  // Accessors
  int getSize() const;
  PlayingCard* getTopCard() const;

  // Shuffle
  void shuffle();

  // Deal a card
  void deal(Hand* player);
  void deal(Player* player);

  // Return a card to the deck
  void replaceInDeck(PlayingCard* cardPointer);
};

#endif
