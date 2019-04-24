#include <iostream>
#include <limits>
#include <ios>
#include "ContactNode.h"

using namespace std;

int main() {

	string fn, ln, name, userNum;
	/*ContactNode *headPtr = new ContactNode("Nick Shepard", "123");
	ContactNode *node2Ptr = new ContactNode("God", "7");
	ContactNode *node3Ptr = new ContactNode("Trump", "666");*/

	cout << "Person 1" << endl << "Enter name:" << endl;

	cin >> fn;
	cin >> ln;

	name = fn + " " + ln;

	cout << "Enter phone number:" << endl;

	cin >> userNum;

	ContactNode *headPtr = new ContactNode(name, userNum);

	cout << "You entered: " << headPtr->GetName() << ", " << headPtr->GetPhoneNumber() << endl << endl;



	cout << "Person 2" << endl << "Enter name:" << endl;

	getline(cin, name);

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	cout << "Enter phone number:" << endl;

	cin >> userNum;

	ContactNode *node2Ptr = new ContactNode(name, userNum);

	cout << "You entered: " << node2Ptr->GetName() << ", " << node2Ptr->GetPhoneNumber() << endl << endl;


	cout << "Person 3" << endl << "Enter name:" << endl;

	cin >> fn;
	cin >> ln;

	name = fn + " " + ln;

	cout << "Enter phone number:" << endl;

	cin >> userNum;

	ContactNode *node3Ptr = new ContactNode(name, userNum);

	cout << "You entered: " << node3Ptr->GetName() << ", " << node3Ptr->GetPhoneNumber() << endl << endl;

	headPtr->InsertAfter(node2Ptr);
	node2Ptr->InsertAfter(node3Ptr);

	cout << "CONTACT LIST" << endl;

	ContactNode *tmpPtr = headPtr;

	while (tmpPtr != NULL) {
		tmpPtr->PrintContactNode();
		tmpPtr = tmpPtr->GetNext();
	}

	







}
