#ifndef PLAYING_CARD
#define PLAYING_CARD

#include<string>

class PlayingCard {
  std::string card, suit;
  int rank;
public:
  PlayingCard();
  PlayingCard(std::string inputCard, std::string inputSuit);
  void drawCard();
  void printCard();
  std::string getCard();
  int getCardIndex() const;
  std::string getSuit();
  int getRank();
};

#endif
