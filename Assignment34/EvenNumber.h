#ifndef EVEN_NUMBER
#define EVEN_NUMBER

class EvenNumber {
  int number;
public:
  EvenNumber();
  EvenNumber(const int inputNumber);
  int getValue() const;
  void setNext();
  void setPrevious();
  EvenNumber operator +(EvenNumber operand);
  EvenNumber operator *(EvenNumber operand);
};

#endif
