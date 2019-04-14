#include <iostream>

using namespace std;

int main () {

	int i;
	double d;

	int&	r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;
	cout << "Address of i : " << &i << endl;
	cout << "Address of r : " << &r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;
	cout << "Address of d : " << &d << endl;
	cout << "Address of s : " << &s << endl;

	r = 10;
	cout << "Value of i : " << i << endl;

	return 0;
}
