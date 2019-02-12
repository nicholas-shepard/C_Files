#include <stdio.h>

int main (void) {

	int intArray[30];
	int userNum;
	int switches = 1;
	int temp;
	int i;
	
	printf("Enter the number of integers (up to 30) in your array:\n");
	scanf("%d", &userNum);
	
	printf("Enter the numbers:\n");
	
	for (i = 0; i < userNum; i++) {
		scanf("%d", &intArray[i]);
	}

	while (switches != 0) {
		switches = 0;
		for (i = 0; i < (userNum - 1); i++) {
			if (intArray[i] < intArray[i + 1]) {
				temp = intArray[i];
				intArray[i] = intArray[i + 1];
				intArray[i + 1] = temp;
				switches += 1;
			}
		}
	}
	

	printf("The numbers arranged in descending order are given below:\n");
	for (i = 0; i < userNum; i++) {
		printf("%d\n", intArray[i]);
	}


	return 0;
}
