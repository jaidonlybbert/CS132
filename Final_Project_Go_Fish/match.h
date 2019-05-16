#ifndef MATCH_H
#define MATCH_H

#include "hand.h"

class Match {
  int matches[14] = {};
  int lastGuess;
  friend Player;
public:
  void findMatches(Hand* hand);
  void printMatches();
  void addMatch(int cardIndex);
  int getSets() const;
  void removeMatch(int cardIndex);
//  std::string closestMatch();
  std::string nextGuess(int handSize);
};

#endif
