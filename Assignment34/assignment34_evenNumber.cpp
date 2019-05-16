#include "EvenNumber.h"

EvenNumber::EvenNumber() { number = 0; }

EvenNumber::EvenNumber(const int inputNumber) { number = inputNumber; }

int EvenNumber::getValue() const { return number; }

void EvenNumber::setNext() { number += 2; }

void EvenNumber::setPrevious() { number -= 2; }

EvenNumber EvenNumber::operator +(EvenNumber operand) {
  return EvenNumber(number + operand.getValue());
}

EvenNumber EvenNumber::operator *(EvenNumber operand) {
  return EvenNumber(number * operand.getValue());
}
