#include <iostream>
#include "ContactNode.h"

ContactNode::ContactNode(string name, string num) {
	contactName = name;
	contactPhoneNum = num;
}

void ContactNode::InsertAfter(ContactNode* newNodePtr) {
	nextNodePtr = newNodePtr;
}

string ContactNode::GetName() {
	return contactName;
}

string ContactNode::GetPhoneNumber() {
	return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {
	return nextNodePtr;
}

void ContactNode::PrintContactNode() {
	cout << "Name: " << contactName << endl << "Phone Number: " << contactPhoneNum << endl << endl;
}
