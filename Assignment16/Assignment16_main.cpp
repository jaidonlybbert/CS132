// Jaidon Lybbert
// February 2, 2019
// Assignment 16: The PlayingCard Class

#include<iostream>
#include<ctime>
#include "PlayingCard.h"
using namespace std;

void CPUVSCPU() {
  int playerScore = 0;
  int cpuScore = 0;
  PlayingCard playerCard;
  PlayingCard cpuCard;

  while(playerScore < 100 && cpuScore < 100) {
    playerCard.drawCard();
    cpuCard.drawCard();
    if (playerCard.getRank() > cpuCard.getRank())
      playerScore += playerCard.getRank() + cpuCard.getRank();
    else if (playerCard.getRank() < cpuCard.getRank())
      cpuScore += playerCard.getRank() + cpuCard.getRank();
    else {
      playerScore += playerCard.getRank();
      cpuScore += cpuCard.getRank();
    }
    cout << "\nCPU card: "; playerCard.printCard();
    cout << "\nCPU 2 card: "; cpuCard.printCard();
    cout << "\nCPU score: " << playerScore << "\nCPU 2 score: " << cpuScore;
  }

  cout << "\n\n";
  if (playerScore > cpuScore) cout << "CPU won!\n";
  else if (cpuScore > playerScore) cout << "CPU 2 won!\n";
  else cout << "It was a tie!\n";
}

void playerVSCPU() {
  int playerScore = 0;
  int cpuScore = 0;
  PlayingCard playerCard;
  PlayingCard cpuCard;

  while(playerScore < 100 && cpuScore < 100) {
    cout << "\n\nEnter any key to draw a card: ";
    cin;
    cin.clear();
    cin.ignore(1000, '\n');
    playerCard.drawCard();
    cpuCard.drawCard();
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
  }

  cout << "\n\n";
  if (playerScore > cpuScore) cout << "Congratulations! You won!\n";
  else if (cpuScore > playerScore) cout << "You Lost! Better luck next time!\n";
  else cout << "It was a tie!\n";
}

int main() {
  srand(time(NULL));
  int gameMode;
  cout << "Choose an option from the menu below:\n1. Player vs CPU\n"
       << "2. CPU vs CPU\n";
  cin >> gameMode;

  if (gameMode == 1) playerVSCPU();
  else if (gameMode == 2) CPUVSCPU();
  else cout << "Error, invalid input!\n";

  return 0;
}
