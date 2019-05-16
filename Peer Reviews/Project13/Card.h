#include <iostream>

using namespace std;

class Card {
public:
	string get_str();
	Card(string rank, string suit);

private:
	string rank, suit;
};