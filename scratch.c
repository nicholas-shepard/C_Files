#include <stdio.h>
//#include <math.h>
#include <string.h>

void scratch(char myString[], int myStringLen) {
	myString[0] = toupper(myString[0]);
	for (int i = 0; i < myStringLen; i++) {
		if ((myString[i] == '.') || (myString[i] == '!') || (myString[i] == '?')) {
			int j = i + 1;
			while (isspace(myString[j]) != 0) {
				myString[j + 1] = toupper(myString[j + 1]);
				j += 1;
			}
		}
	}
}

int main (void) {
	//int i = 10;
	//int iLength = floor(log10(abs(i)));
	//printf("%d", iLength);

	char aString[50] = "dog.        biscuits!";

	scratch(&aString, strlen(aString));
	
	printf("%s\n", aString);

	return 0;
}
