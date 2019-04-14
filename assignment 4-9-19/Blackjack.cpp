#include <iostream>
#include <cstdbool>
#include "Blackjack.h"

vector<Card> initPlayer(Deck d) {
	vector<Card> hand;
	hand.push_back(d.dealCard());
	hand.push_back(d.dealCard());
	return hand;
}

vector<Card> initDealer(Deck d) {
	vector<Card> hand;
	hand.push_back(d.dealCard());
	hand.push_back(d.dealCard());
	return hand;
}

bool hasAce (vector<Card> hand) {
	for (int i = 0; i < hand.size(); i++) {
		if (hand.at(i).getValue() == 1) {
			return true;
		}
	}
	return false;
}
