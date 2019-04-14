#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Deck.h"
//#include "Card.h"
#include <cstdbool>

using namespace std;

int Deck::deckSize() {
	return mydeck.size();
}

void Deck::newDeck() {

	mydeck.clear();

	int k = 0;

	for (int i = 0; i < 52; i++) {
		mydeck.push_back(Card());
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			switch(i) {
				case 0: mydeck.at(k).setSuit("Clubs");
					break;

				case 1: mydeck.at(k).setSuit("Diamonds");
					break;

				case 2: mydeck.at(k).setSuit("Spades");
					break;

				case 3: mydeck.at(k).setSuit("Hearts");
			}

			switch(j) {
				case 0: mydeck.at(k).setName("Ace");
					mydeck.at(k).setValue(1);
					break;

				case 1: mydeck.at(k).setName("Two");
					mydeck.at(k).setValue(2);
					break;
					
				case 2: mydeck.at(k).setName("Three");
					mydeck.at(k).setValue(3);
					break;
					
				case 3: mydeck.at(k).setName("Four");
					mydeck.at(k).setValue(4);
					break;
					
				case 4: mydeck.at(k).setName("Five");
					mydeck.at(k).setValue(5);
					break;
					
				case 5: mydeck.at(k).setName("Six");
					mydeck.at(k).setValue(6);
					break;
					
				case 6: mydeck.at(k).setName("Seven");
					mydeck.at(k).setValue(7);
					break;
					
				case 7: mydeck.at(k).setName("Eight");
					mydeck.at(k).setValue(8);
					break;
					
				case 8: mydeck.at(k).setName("Nine");
					mydeck.at(k).setValue(9);
					break;
					
				case 9: mydeck.at(k).setName("Ten");
					mydeck.at(k).setValue(10);
					break;
					
				case 10: mydeck.at(k).setName("Jack");
					mydeck.at(k).setValue(10);
					break;
					
				case 11: mydeck.at(k).setName("Queen");
					mydeck.at(k).setValue(10);
					break;
					
				case 12: mydeck.at(k).setName("King");
					mydeck.at(k).setValue(10);
					break;
			}

			//cout << "Created card " << k << endl;

			k += 1;

		}
		
		
	}
}

Card Deck::dealCard() {
	srand((int)time(0));

	int deckNum = rand() % mydeck.size();

	Card temp = mydeck.at(deckNum);

	mydeck.erase(mydeck.begin() + deckNum);

	return temp;
	
}
