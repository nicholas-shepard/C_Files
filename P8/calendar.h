#include <iostream>
#include <iomanip>

bool isLeapYear(int year);

int firstDayYear(int year);

int firstDayMonth(int firstDayYear, int month, int year);

int numDays(int month, int year);

void printHead(int month, int year);

void printBody(int firstDayMonth, int numDays);
