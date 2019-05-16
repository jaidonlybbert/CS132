#ifndef HAND_H
#define HAND_H

#include<vector>
#include<iostream>

class Deck;
class PlayingCard;
class Player;

class Hand {

  // Contents of hand
  std::vector<PlayingCard*> cardsInHand;

  friend class Match;
  friend class Player;

public:

  // Constructors
  Hand();

  // Accessors
  int getSize() const;
  bool hasCard(std::string card);

  // Add card to hand
  void addCard(PlayingCard* cardPointer);

  // Remove card from hand
  void removeCard(std::string suit, std::string faceValue, Deck* returnDeck);
  void removeCard(int index);
  void removeCard(PlayingCard* cardPointer);
  void removeAllCards(Deck* returnDeck);
  void removeAllCards(int cardIndex);

  // Pass card to another hand
  void cardToNewHand(std::string card, Player* toPlayer);

  // Print contents of hand
  void printHand();
};

#endif
