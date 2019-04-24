#include <iostream>
#include <string>

using namespace std;

class ContactNode {
	public:
		ContactNode(string name, string num);
		void InsertAfter(ContactNode* newNodePtr);
		string GetName();
		string GetPhoneNumber();
		ContactNode* GetNext();
		void PrintContactNode();
	private:
		string contactName;
		string contactPhoneNum;
		ContactNode* nextNodePtr;
};
