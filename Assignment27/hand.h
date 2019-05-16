#ifndef HAND_H
#define HAND_H

#include<vector>
#include<iostream>

class Deck;
class PlayingCard;

class Hand {
public:
  std::vector<PlayingCard*> cardsInHand;
  Hand();
  void addCard(PlayingCard* cardPointer);
  void removeCard(std::string suit, std::string faceValue, Deck* returnDeck);
  void removeAllCards(Deck* returnDeck);
  void printHand();
};

#endif
