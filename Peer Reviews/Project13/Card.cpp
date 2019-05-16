#include "Card.h"
using namespace std;

string Card::get_str() {
	return rank + " of " + suit;
}

Card::Card(string rank, string suit) {
	this->rank = rank;
	this->suit = suit;
}