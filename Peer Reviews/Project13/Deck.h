#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;
// this is a way shorter version of the deck class that i used before but now this is vector instead of an array
class Deck {
public:
	void shuffle();
	int count();
	Card* deal_card();
	Deck();

private:
	vector<Card*> deck;
};