// Jaidon Lybbert
// February 19, 2019
// Assignment 27: Decks, Cards and Hands

#include<iostream>
#include "deck.h"
#include "hand.h"
#include "PlayingCard.h"

using namespace std;


int main() {

  Deck* playDeck = new Deck;
  Hand* playerOneHand = new Hand;
  string discardSuit, discardFaceValue;

// shuffle deck
  playDeck->shuffle();

// deal cards to player
  for (int i = 0; i < 7; i++) {
    playDeck->deal(playerOneHand);
  }

// print player hand
  playerOneHand->printHand();
  cout << endl;

// ask player which card to discard
  cout << "Enter card to discard (facevalue suit): ";
  cin >> discardFaceValue;
  cin >> discardSuit;

// remove card from player hand and return to deck
  playerOneHand->removeCard(discardSuit, discardFaceValue, playDeck);

// shuffle deck
  playDeck->shuffle();

// deal new card to player
  playDeck->deal(playerOneHand);

// print player hand
  playerOneHand->printHand();
  cout << endl;

  return 0;
}
