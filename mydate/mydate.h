#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date {
	public:
		Date(int month, int day, int year);
		Date();
		Date operator++();
		Date operator++(int);
		Date operator+=(int num);
		friend ostream& operator<<(ostream& os, const Date& date);
		void printDate();
		
	private:
		int month, day, year;
};

int numDays(int month, int year);

bool isLeapYear(int year);
