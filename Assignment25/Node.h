#ifndef NODE_H
#define NODE_H

class Node {
public:
  int integer;
  Node* pointer;
  Node();
  Node(int integer);
  void addNode(Node* pointer);
};

#endif
