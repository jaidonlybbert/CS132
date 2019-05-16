#include "Deck.h"

using namespace std;

Deck::Deck() {
	// new vector versio of this where i put each card in a vector istead of using cases
	vector<string> ranks = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
	vector<string> suits = { "Clubs", "Diamonds", "Hearts", "Spades" };

	for (int i = 0; i < ranks.size(); i++) {
		for (int j = 0; j < suits.size(); j++) {
			deck.push_back(new Card(ranks[i], suits[j]));
		}
	}
}

void Deck::shuffle() {
	for (int i = 0; i < deck.size(); i++) {
		int index = rand() % deck.size();
		Card* t = deck[index];
		deck[index] = deck[i];
		deck[i] = t;
	}
}
int Deck::count() {
	return deck.size();
}

Card* Deck::deal_card() {
	if (deck.size() != 0) {
		Card *c = deck.back();
		deck.pop_back();
		return c;
	}
}