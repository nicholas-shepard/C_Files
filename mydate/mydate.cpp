#include <iostream>
#include "mydate.h"
#include <string>

using namespace std;

Date::Date(int month, int day, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date() {
	day = 1;
	month = 1;
	year = 1900;
}

Date Date::operator++() {
	day += 1;
	if (day > numDays(month, year)) {
		day = 1;
		month += 1;
	}
	if (month > 12) {
		month = 1;
		year += 1;
	}

	return *(this);
}

Date Date::operator++(int) {
	Date temp = *this;
	++*this;
	return temp;
}

Date Date::operator+=(int num) {
	day += num;
	while (day > numDays(month, year)) {
		day -= numDays(month, year);
		month += 1;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	return *(this);

}

ostream& operator<<(ostream& os, const Date& date) {
	string monthStr;
	switch(date.month) {
		case(1): monthStr = "January";
			break;
		case(2): monthStr = "February";
			break;
		case(3): monthStr = "March";
			break;
		case(4): monthStr = "April";
			break;
		case(5): monthStr = "May";
			break;
		case(6): monthStr = "June";
			break;
		case(7): monthStr = "July";
			break;
		case(8): monthStr = "August";
			break;
		case(9): monthStr = "September";
			break;
		case(10): monthStr = "October";
			break;
		case(11): monthStr = "November";
			break;
		case(12): monthStr = "December";
			break;
	}

	os << monthStr << " " << date.day << ", " << date.year;
	return os;
}

void Date::printDate() {
	cout << month << "/" << day << "/" << year << endl;
}

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

bool isLeapYear(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
