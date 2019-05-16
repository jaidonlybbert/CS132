// Jaidon Lybbert
// February 19, 2019
// Assignment 25: Chain of Nodes

#include<iostream>
#include<ctime>
#include "Node.h"

using namespace std;


int main() {
  srand(time(NULL));
  Node* original;
  Node* pointer;
  Node* temp;
  original = new Node(rand() % 10 + 1);
  pointer = original;

  for (int i = 0; i < 9; i++) {
    temp = new Node(rand() % 10 + 1);
    pointer->addNode(temp);
    pointer = temp;
  }

  pointer = original;
  cout << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Node " << i << " data: " << pointer->integer << endl;
    pointer = pointer->pointer;
  }

  return 0;
}
