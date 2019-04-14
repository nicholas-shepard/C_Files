#include <iostream>
#include <string>
#include <cstdbool>

using namespace std;

class Card {
	public:
		void setName(string cardName);
		void setSuit(string cardSuit);
		void setValue(int cardValue);
		string getName();
		string getSuit();
		int getValue();
		void printCard();
		//bool isAce();
	private:
		string name;
		string suit;
		int value;
};//
