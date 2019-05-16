#ifndef DECK_H
#define DECK_H

#include<iostream>
#include<vector>
#include<string>
#include "PlayingCard.h"

using namespace std;

class Hand;
class PlayingCard;

class Deck {
  int drawn;
  int deckSize;
public:
  vector<PlayingCard*> deck;
  static vector<std::string> cards;
  static vector<int> ranks;
  static std::string suits[4];
  Deck();
  void shuffle();
  PlayingCard draw();
  void reset();
  void deal(Hand* player);
  void replaceInDeck(PlayingCard* cardPointer);
  int getDrawn();
};

#endif
