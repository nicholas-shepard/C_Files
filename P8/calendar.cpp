#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

//Determining if a year was/is a leap year
bool isLeapYear(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

//Determining the day of the week of January 1 of a given year
int firstDayYear(int year) {
	int totalDays = 3;
	for (int i = 1800; i < year; i++) {
		if (isLeapYear(i)) {
			totalDays += 366;
		}

		else {
			totalDays += 365;
		}
	}

	return (totalDays % 7);
}

//Determining the day of the week of a given month in a given year
int firstDayMonth(int firstDayYear, int month, int year) {

	int totalDays = firstDayYear;
	/*int febDays;

	if (isLeapYear(year)) {
		febDays = 29;
	}

	else {
		febDays = 28;
	}

	switch(month) {
		case 1: totalDays = totalDays;
			break;
		case 2: totalDays = totalDays + 31;
			break;
		case 3: totalDays = totalDays + febDays + 31;
			break;
		case 4: totalDays = totalDays + febDays + 62;
			break;
		case 5: totalDays = totalDays + febDays + 92;
			break;
		case 6: totalDays = totalDays + febDays + 123;
			break;
		case 7: totalDays = totalDays + febDays + 153;
			break;
		case 8: totalDays = totalDays + febDays + 184;
			break;
		case 9: totalDays = totalDays + febDays + 215;
			break;
		case 10: totalDays = totalDays + febDays + 245;
			break;
		case 11: totalDays = totalDays + febDays + 276;
			break;
		case 12: totalDays = totalDays + febDays + 306;
			break;
	}*/

	for (int i = month; i > 1; i--) {
		totalDays += numDays((i-1), year);
	}

	//totalDays += 1;

	return (totalDays % 7);
}

//Determining how many days are in a given month in a given year
int numDays(int month, int year) {
	switch(month) {
		case 1: return 31;
			break;
		case 2: if (isLeapYear(year)) {
				return 29;
			}

			else {
				return 28;
			}
			break;
		case 3: return 31;
			break;
		case 4: return 30;
			break;
		case 5: return 31;
			break;
		case 6: return 30;
			break;
		case 7: return 31;
			break;
		case 8: return 31;
			break;
		case 9: return 30;
			break;
		case 10: return 31;
			break;
		case 11: return 30;
			break;
		case 12: return 31;
			break;
	}
}

//Printing month and year of a calendar
void printHead(int month, int year) {
	switch(month) {
		case 1: cout << setw(16) << "JANUARY " << year << endl;
			break;
		case 2: cout << setw(16) << "FEBRUARY " << year << endl;
			break;
		case 3: cout << setw(16) << "MARCH " << year << endl;
			break;
		case 4: cout << setw(16) << "APRIL " << year << endl;
			break;
		case 5: cout << setw(16) << "MAY " << year << endl;
			break;
		case 6: cout << setw(16) << "JUNE " << year << endl;
			break;
		case 7: cout << setw(16) << "JULY " << year << endl;
			break;
		case 8: cout << setw(16) << "AUGUST " << year << endl;
			break;
		case 9: cout << setw(16) << "SEPTEMBER " << year << endl;
			break;
		case 10: cout << setw(16) << "OCTOBER " << year << endl;
			break;
		case 11: cout << setw(16) << "NOVEMBER " << year << endl;
			break;
		case 12: cout << setw(16) << "DECEMBER " << year << endl;
			break;
	}

	cout << endl;
}

//Printing the body of the calendar
void printBody(int firstDayMonth, int numDays) {
	cout << setw(4) << "SUN";
	cout << setw(4) << "MON";
	cout << setw(4) << "TUE";
	cout << setw(4) << "WED";
	cout << setw(4) << "THU";
	cout << setw(4) << "FRI";
	cout << setw(4) << "SAT" << endl;
	cout << setw(4 * (firstDayMonth + 1));
	for (int i = 1; i < (numDays + 1); i++) {
		if ((i + firstDayMonth - 1) % 7 == 0) {
			cout << endl;
		}

		cout << i << setw(4);
	}
	cout << endl << endl;
}
