#include <iostream>
#include <string>
#include <cstdbool>
#include <typeinfo>
//#include "Card.h"
//#include "Deck.h"
#include "Blackjack.h"

using namespace std;

int main() {

	Deck d;

	int playerBalance, playerValue, dealerValue, i, bet;
	char playAgain = 'y';
	char end;
	bool playerHasAce, dealerHasAce;

	cout << "Welcome to Blackjack! How much would you like to buy in ($)?" << endl;
	cin >> playerBalance;
	
	while(!cin) {
		cout << "That was no integer! Please enter an integer: ";
		cin.clear();
		cin.ignore();
		cin.clear();
		cin.ignore();
		cin.clear();
		cin.ignore();
		cin >> playerBalance;
	}

	

	vector<Card> player;
	vector<Card> dealer;

	d.newDeck();

	//Beginning game
	while (playAgain == 'y') {

		if (d.deckSize() < 20) {
			cout << endl << "RESHUFFLING..." << endl;
			d.newDeck();
		}

		end = 'h';

		//Getting player's bet
		cout << endl << "BET? " << endl;
		cin >> bet;
	
		while(!cin) {
			cout << "That was no integer! Please enter an integer: ";
			cin.clear();
			cin.ignore();
			cin.clear();
			cin.ignore();
			cin.clear();
			cin.ignore();
			cin >> bet;
		}

		//Resetting player and dealer hands
		player.clear();
		dealer.clear();
		playerHasAce = false;
		dealerHasAce = false;

		

		//Resetting player values and indexing variable
		playerValue = 0;
		dealerValue = 0;
		i = 1;

		//Dealing player's first two cards, checking for ace
		player.push_back(d.dealCard());
		playerValue += player.at(0).getValue();
		player.push_back(d.dealCard());
		playerValue += player.at(1).getValue();
		if (hasAce(player)) {
			playerHasAce = true;
		}

		//Dealing dealer's first two cards, checking for ace
		dealer.push_back(d.dealCard());
		dealerValue += dealer.at(0).getValue();
		dealer.push_back(d.dealCard());
		dealerValue += dealer.at(1).getValue();
		if (hasAce(dealer)) {
			dealerHasAce = true;
		}

		//Printing player's first two cards
		cout << endl << "YOUR CARDS:" << endl;
		player.at(0).printCard();
		player.at(1).printCard();

		//Printing dealer's first card
		cout << endl << "DEALER'S FIRST CARD:" << endl;
		dealer.at(0).printCard();

		//Checking if player got Blackjack
		if ((playerValue + 10 == 21) && playerHasAce && not ((dealerValue + 10 == 21) && dealerHasAce)) {
			playerValue += 10;
			playerBalance += (bet * 1.5);
			cout << endl << "BLACKJACK!!! YOU WIN $" << (bet * 1.5) << "!" << endl << endl << "BALANCE: " << playerBalance << endl;
			end = 'b';
		}

		//Not prompting player if player got Blackjack
		if (end != 'b') {
			cout << endl << "HIT OR STAND? (h/s) " << endl;
	
			cin >> end;
		}

		//Drawing cards for dealer
		while (dealerValue < 17 || ((dealerValue < 7) && dealerHasAce)) {
			if (dealerValue + 10 == 21 && dealerHasAce) {
				dealerValue += 10;
				break;
			}
			dealer.push_back(d.dealCard());
			dealerValue += dealer.at((dealer.size() - 1)).getValue();
			if ((dealerValue + 10) > 17 && (dealerValue + 10) < 21 && dealerHasAce) {
				dealerValue += 10;
				break;
			}
		}

		//Drawing new cards for player
		while (end == 'h') {

			i += 1;

			player.push_back(d.dealCard());

			if (hasAce(player)) {
				playerHasAce = true;
			}

			playerValue += player.at(i).getValue();

			//Printing player's cards
			cout << endl << "YOUR CARDS:" << endl;
			for (int j = 0; j < (i + 1); j++) {
				player.at(j).printCard();
			}

			//Checking if player busted
			if (playerValue > 21) {
				/*cout << "BUST!" << endl;
				playerBalance -= bet;
				cout << "BALANCE: $" << playerBalance << endl;*/
				end = 's';
			}

			//cout << playerValue << endl;

			//Prompting player to hit or stand
			if (end == 'h') {
				cout << endl << "HIT OR STAND? (h/s) " << endl;
				cin >> end;
			}
		}

		//Getting final player value if they chose to stand
		if (end == 's') {
			if (((playerValue + 10) <= 21) && playerHasAce) {
				playerValue += 10;
			}
		}

		//Printing dealer's cards
		cout << endl << "DEALER'S CARDS:" << endl;
		for (int j = 0; j < dealer.size(); j++) {
			dealer.at(j).printCard();
		}

		//Outputting final values
		cout << endl << "PLAYER VALUE: " << playerValue << endl;
		cout << endl << "DEALER VALUE: " << dealerValue << endl;


		//Determining winner
		while (end != 'b') {
			if ((playerValue > 21) && (dealerValue > 21)) {
				cout << endl << "BOTH BUSTED! YOU LOSE $" << bet << "!" << endl;
				playerBalance -= bet;
			}
			else if (dealerValue == 21 && dealer.size() == 2) {
				cout << endl << "DEALER GOT BLACKJACK! YOU LOSE $" << bet << "!" << endl;
				playerBalance -= bet;
			}
			else if (playerValue > 21) {
				cout << endl << "YOU BUSTED! YOU LOSE $" << bet << "!" << endl;
				playerBalance -= bet;
			}
			else if (dealerValue > 21) {
				cout << endl << "DEALER BUSTED! YOU WIN $" << bet << "!" << endl;
				playerBalance += bet;
			}
			else {
				if ((21 - playerValue) < (21 - dealerValue)) {
					cout << endl << "YOU WON! YOU GET $" << bet << "!" << endl;
					playerBalance += bet;
				}
	
				else if ((21 - playerValue) > (21 - dealerValue)) {
					cout << endl << "YOU LOST! YOU LOSE $" << bet << "!" << endl;
					playerBalance -= bet;
				}

				else if (playerValue == dealerValue) {
					cout << endl << "PUSH!" << endl;
				}	
			}
			end = 'b';
		}

		cout << endl << "YOUR BALANCE: $" << playerBalance << endl;

		//Prompting user to keep playing or not
		cout << endl << "KEEP PLAYING? (y/n)" << endl;
		cin >> playAgain;
	}

	/*vector<Card> player;
	vector<Card> dealer;
	int playerValue = 0;
	int dealerValue = 0;

	player.push_back(d.dealCard());
	playerValue += player.at(0).getValue();
	player.push_back(d.dealCard());
	playerValue += player.at(1).getValue();
	dealer.push_back(d.dealCard());
	dealerValue += dealer.at(0).getValue();
	dealer.push_back(d.dealCard());
	dealerValue += dealer.at(1).getValue();

	player.at(0).printCard();
	player.at(1).printCard();
	dealer.at(0).printCard();
	dealer.at(1).printCard();

	cout << "Player value: " << playerValue << endl << "Dealer value: " << dealerValue << endl;

	cout << d.deckSize() << endl;*/

	return 0;
}
