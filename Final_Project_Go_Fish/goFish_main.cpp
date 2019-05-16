// Jaidon Lybbert
// March 13, 2019
// Final Project: Go Fish

#include<iostream>
#include<iomanip>
#include "PlayingCard.h"
#include "deck.h"
#include "hand.h"
#include "match.h"
#include "player.h"

using namespace std;

int main() {
  Player* user = new Player("User", true);
  Player* npc = new Player("NPC", false);
  Deck* playdeck = new Deck;
  int cardQueryIndex;
  bool won = false;
  srand(time(NULL));

  // Shuffle deck
  playdeck->shuffle();

  // Deal cards
  for (int i = 0; i < 7; i++) {
    playdeck->deal(user);
    playdeck->deal(npc);
  }

  // print rules
  cout << setfill('\n') << setw(100) << "\n";

  cout << "Welcome to go fish!\n\nHere are the rules:\n"
       << "Each player sorts their cards into groups of the same number or suit"
       << "\n(i.e. group of threes or group of kings), making sure not to show "
       << "\nanyone. The “requester” (person to the left of the dealer) starts "
       << "\nthe game by asking another player for cards that will match his "
       << "\nhand. For example, if the requester has two kings, he will ask the"
       << "\nother player for kings. If the other player has these cards, he "
       << "\nmust hand them over. The requester continues asking the same player"
       << "\nfor more cards until the player does not have the cards he wants."
       << "\nIf the player does not have the right cards, he can tell the "
       << "\nrequester to “Go fish.” The requester then has to take one card "
       << "\nfrom the “fish pond.” The player who told him to “Go fish” becomes"
       << "\nthe new requester.\n\n"
       << "Remember to only enter in the face value of the card you are"
       << "\nrequesting! For example, type 'King' to request kings or '2' to"
       << "\nrequest 2's. Capitalize 'Ace', 'Jack', 'Queen' and 'King'!\n"
       << "\nPress enter to begin!\n";

  cin.get();
  cin.clear();
  cin.ignore(1000, '\n');

  cout << setfill('\n') << setw(100) << "\n";


  // Game loop
  while(user->getHand()->getSize() > 0 && npc->getHand()->getSize() > 0) {

    // Player 1 takes turn
    user->manualCardQuery(npc, playdeck);

    // Check if either player has run out of cards
    if (npc->getHand()->getSize() == 0 && user->getHand()->getSize() != 0) {
      cout << endl;
      cout << npc->getName() << " won by running out of cards first!\n";
      won = true;
      break;
    } else if (user->getHand()->getSize() == 0 && npc->getHand()->getSize() != 0) {
      cout << endl;
      cout << user->getName() << " won by running out of cards first!\n";
      won = true;
      break;
    }

    // Player 2 takes turn
    npc->cardQuery(user, playdeck);

    // Check if either player has run out of cards
    if (npc->getHand()->getSize() == 0 && user->getHand()->getSize() != 0) {
      cout << endl;
      cout << npc->getName() << " won by running out of cards first!\n";
      won = true;
      break;
    } else if (user->getHand()->getSize() == 0 && npc->getHand()->getSize() != 0) {
      cout << endl;
      cout << user->getName() << " won by running out of cards first!\n";
      won = true;
      break;
    }
  }

  // if the game is not won by running out of cards, compare number of matches
  if(!won) {
    if (npc->getMatches()->getSets() > user->getMatches()->getSets()) {
      cout << npc->getName() << " won by having the most matches!\n";
    } else if (npc->getMatches()->getSets() < user->getMatches()->getSets()) {
      cout << user->getName() << " won by having the most matches!\n";
    } else {
      cout << "The game ended in a tie!\n";
    }
  }

  cout << "\nFinal results:\n" << user->getName() << " matches: "
       << user->getMatches()->getSets() << endl << npc->getName()
       << " matches: " << npc->getMatches()->getSets() << endl;

  return 0;
}
