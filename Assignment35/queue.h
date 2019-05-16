#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>

using namespace std;

template <class Type>
class Queue {
  vector<Type> queue;
public:
  void add(Type x);
  Type remove();
  void printQueue();
};

#endif
