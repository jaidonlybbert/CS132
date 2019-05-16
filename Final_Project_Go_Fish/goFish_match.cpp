#include "hand.h"
#include "match.h"
#include "deck.h"


// defines a list of all matches in a given hand
void Match::findMatches(Hand* hand) {
  for (int i = 0; i < hand->cardsInHand.size(); i++) {
    for (int j = 0; j < 13; j++) {
      if (hand->cardsInHand[i]->getCard() == Deck::cards[j]) {
        matches[j]++;
      }
    }
  }
}


int Match::getSets() const {
  return matches[13];
}


// Prints list of numbers of each card
void Match::printMatches() {
  for (int i = 0; i < 14; i++) {
    cout << matches[i] << " ";
  } cout << endl;
}


// Finds closest match
std::string Match::nextGuess(int handSize) {
  int closestMatch = 0;
  int secondClosest = 0;
  int largestNumCards = 0;
  int guess = 0;

  for (int i = 0; i < 13; i++) {
    if (matches[i] > largestNumCards) {
      secondClosest = closestMatch;
      closestMatch = i;
      largestNumCards = matches[i];
    } else if (matches[i] == largestNumCards || matches[i] > matches[secondClosest]) {
      secondClosest = i;
    }
  }

  if (handSize == largestNumCards) {
    return Deck::cards[closestMatch];
  }

  if (lastGuess == closestMatch) {
    guess = secondClosest;
  } else {
    guess = closestMatch;
  }

  lastGuess = guess;
  return Deck::cards[guess];
}


// Adds card to matches
void Match::addMatch(int cardIndex) {
  matches[cardIndex]++;
}

void Match::removeMatch(int cardIndex) {
  matches[cardIndex]--;
}
