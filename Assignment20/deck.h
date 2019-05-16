#ifndef DECK_H
#define DECK_H
#include<vector>
#include<string>
#include "PlayingCard.h"
#include<iostream>
using namespace std;

class Deck {
  int drawn;
public:
  vector<PlayingCard> deck;
  static vector<string> cards;
  static vector<int> ranks;
  static string suits[4];
  Deck();
  void shuffle();
  PlayingCard draw();
  void reset();
  int getDrawn();
};

#endif
