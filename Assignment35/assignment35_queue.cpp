#include<iostream>
#include "queue.h"

using namespace std;


template <class Type>
void Queue<Type>::add(Type x) {
  queue.push_back(x);
}


template <class Type>
Type Queue<Type>::remove() {
  Type name = queue[0];
  queue.erase(queue.begin());
  return name;
}


template <class Type>
void Queue<Type>::printQueue() {
  cout << "Contents of queue:\n";
  for (int i = 0; i < queue.size(); i++) {
    cout << queue[i] << " ";
  }
  cout << endl;
}

template class Queue<string>;
