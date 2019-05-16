#include<iostream>
#include "Deck.h"
using namespace std;

int main() {
	// Struggled a little with this assignment because all this pointer and dot notation and class stuff can be confusing

	cout << "Card Dealer" << endl;

	Deck d;
	int num;
	cout << "I have shuffled a deck of " << d.count() << " cards" << endl;

	cout << "How many cards would you like: ";
	cin >> num;

	cout << "Here are your cards:" << endl;
	// this was suppose to print out each card that you had in your hand
	while (num-- > 0) {
		// you think you understand how pointers and dot notation but you really dont when you get stuck
		// I cannot seem to figure this out completely pointers really confuse me 
		cout << d.deal_card()->get_str() << endl;
	}
	// this should count how many cards that are left in the deck
	cout << "There are " << d.count() << " cards left in the deck" << endl;
	system("PAUSE");
}