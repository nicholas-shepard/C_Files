#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include <cstdbool>

using namespace std;

class Deck {
	public:
		int deckSize();
		void newDeck();
		Card dealCard();
	private:
		vector<Card> mydeck;
};

//hello
