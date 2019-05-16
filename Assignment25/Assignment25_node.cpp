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
  this->pointer = pointer;
}
