#include<iostream>
#include "deck.h"
#include "PlayingCard.h"
#include<ctime>
using namespace std;

void war() {
  int playerScore = 0;
  int cpuScore = 0;
  PlayingCard playerCard;
  PlayingCard cpuCard;
  Deck playDeck;

  playDeck.reset(); // doesn't actually accomplish anything here

  playDeck.shuffle();

  while(playDeck.getDrawn() < 52) {
    cout << "\n\nEnter any key to draw a card: ";
    cin;
    cin.clear();
    cin.ignore(1000, '\n');
    playerCard = playDeck.draw();
    cpuCard = playDeck.draw();
    if (playerCard.getRank() > cpuCard.getRank())
      playerScore += playerCard.getRank() + cpuCard.getRank();
    else if (playerCard.getRank() < cpuCard.getRank())
      cpuScore += playerCard.getRank() + cpuCard.getRank();
    else {
      playerScore += playerCard.getRank();
      cpuScore += cpuCard.getRank();
    }
    cout << "\nPlayer card: "; playerCard.printCard();
    cout << "\nCPU card: "; cpuCard.printCard();
    cout << "\nPlayer score: " << playerScore << "\nCPU score: " << cpuScore;
    cout << "\nCards drawn: " << playDeck.getDrawn();
  }

  cout << "\n\n";
  if (playerScore > cpuScore) cout << "Congratulations! You won!\n";
  else if (cpuScore > playerScore) cout << "You Lost! Better luck next time!\n";
  else cout << "It was a tie!\n";
}

int main() {
  string choice;
  srand(time(NULL));
  while(true) {
    war();
    cout << "Would you like to play again (y/n)? ";
    cin >> choice;
    if (choice == "y" || choice == "Y") {
      continue;
    } else {
      cout << "Thank you for playing!\n";
      exit(0);
    }
  }

  return 0;
}
