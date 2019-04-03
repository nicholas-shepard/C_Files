#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

int main() {

	int userYear, userMonth;

	//Get user info
	cout << "Enter full year (e.g., 2001): ";
	cin >> userYear;
	cout << "Enter month in number between 1 and 12: ";
	cin >> userMonth;
	cout << endl;

	//Print calendar
	printHead(userMonth, userYear);
	printBody(firstDayMonth(firstDayYear(userYear), userMonth, userYear), numDays(userMonth, userYear));



	return 0;
}
