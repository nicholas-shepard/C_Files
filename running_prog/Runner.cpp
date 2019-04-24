#include <iostream>
#include <string>
#include <iomanip>
#include "Runner.h"

using namespace std;

void Runner::setname(string username) {
	name = username;
}

void Runner::setage(int userage) {
	age = userage;
}

void Runner::set400(int minutes, double seconds) {
	four = double(minutes * 60) + seconds;
}

void Runner::set800(int minutes, double seconds) {
	eight = double(minutes * 60) + seconds;
}

void Runner::set1600(int minutes, double seconds) {
	sixteen = double(minutes * 60) + seconds;
}

void Runner::setmile(int minutes, double seconds) {
	mile = double(minutes * 60) + seconds;
}

void Runner::set3200(int minutes, double seconds) {
	two = double(minutes * 60) + seconds;
}

void Runner::set5000(int minutes, double seconds) {
	five = double(minutes * 60) + seconds;
}

double Runner::get400() {
	return four;
}

double Runner::get800() {
	return eight;
}

double Runner::get1600() {
	return sixteen;
}

double Runner::getmile() {
	return mile;
}

double Runner::get3200() {
	return two;
}

double Runner::get5000() {
	return five;
}

void Runner::printrunner() {
	cout << name << ", " << age << ":" << endl;
	cout << "400: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(get400()) << endl;
	}

	cout << "800: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(get800()) << endl;
	}

	cout << "1600: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(get1600()) << endl;
	}

	cout << "Mile: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(getmile()) << endl;
	}

	cout << "3200: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(get3200()) << endl;
	}

	cout << "5000: ";
	if (get400() == -1.0) {
		cout << "NT" << endl;
	}

	else {
		cout << formatTime(get5000()) << endl;
	}
}

string formatTime(double time) {
	string temp;
	temp = to_string((int(time - double((int(time * 100) % 6000)) / 100)) / 60) + ":" + to_string(double((int(time * 100) % 6000) / 100.0));
	if (double(int(time * 100) % 6000 / 100) < 10) {
		temp = temp.substr(0, (temp.length() - 8)) + "0" + temp.substr((temp.length() - 8), (temp.length() - 1));
	}
	return temp.substr(0, (temp.length() - 4));
}

int getPace(int dist, double time) {
	double temp = 1609.344 / double(dist);
	double pace = temp * time;
	return pace;
}
