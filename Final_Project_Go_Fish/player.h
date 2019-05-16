#ifndef PLAYER_H
#define PLAYER_H

#include "hand.h"
#include "match.h"
#include "deck.h"

class Player {
  std::string name;
  Hand* hand;
  Match* matches;
  bool activePlayer;

public:

  // Constructors
  Player(std::string name, bool activePlayer);

  // Accessors
  Hand* getHand() const;
  Match* getMatches() const;
  std::string getName() const;

  // Mutators
  void setName(const std::string& name);
  void addCard(PlayingCard* cardPointer);
  void removeCard(PlayingCard* card);
  void addMatch(int cardIndex);
  // Ask opponent for card
  void cardQuery(Player* opponent, Deck* playdeck);
  void manualCardQuery(Player* opponent, Deck* playdeck);

  // Go fish!
  void goFish(Deck* playdeck);

  void cardFromPlayer(std::string card, Player* opponent);
};

#endif
