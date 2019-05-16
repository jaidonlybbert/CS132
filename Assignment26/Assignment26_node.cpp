#include<iostream>
#include "Node.h"

using namespace std;

Node::Node() {
  this->integer = 0;
  pointer = NULL;
}

Node::Node(int integer) {
  this->integer = integer;
  pointer = NULL;
  cout << "Node initialized with data: " << this->integer;
  cout << endl;
}

void Node::addNode(Node* pointer) {
  if (this->pointer == NULL) { this->pointer = pointer; }
  else { this->pointer->addNode(pointer); }
}

void Node::pushBack(int integer) {
  Node* newPointer = new Node(integer);
  this->addNode(newPointer);
}

void Node::printChain() {
  Node* currentPointer = this;
  cout << endl;
  while (currentPointer != NULL) {
    cout << currentPointer->integer << " ";
    currentPointer = currentPointer->pointer;
  }
  cout << endl;
}
