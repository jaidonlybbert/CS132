#ifndef EVEN_NUMBER
#define EVEN_NUMBER

class EvenNumber {
  int number;
public:
  EvenNumber() { number = 0; }
  EvenNumber(const int inputNumber) { number = inputNumber; }
  int getValue() const { return number; }
  void setNext() { number += 2; }
  void setPrevious() { number -= 2; }
};

#endif
