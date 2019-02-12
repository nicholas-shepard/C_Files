#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int walks;
	int i;
	int location;
	int flip;
	char userChar = 'y';
	int j;

	

	//Run program until user wants to stop
	while (userChar == 'y') {

		int walkArray[11] = {0};
		location = 5;

		printf("Enter an int.\n");
		scanf("%d", &walks);
		
		for (i = 0; i < walks; i++) {
	
			//Coin flip
			flip = (rand() % 2);
	
			//Moving cells
			if (flip == 0) {
				location += 1;
			}
			
			else if (flip == 1) {
				location -= 1;
			}
	
			//Deal with running out of bounds of the array
			if (location < 0) {
				location = 0;
			}
	
			else if (location > 10) {
				location = 10;
			}
			
			//Counting visitsn
			walkArray[location] += 1;
		}
		
		//Printing results
		for (i = 0; i < 11; i++) {
			printf("Cell %d:", (i + 1));
			for (j = 0; j < walkArray[i]; j++) {
				printf("* ");
			}
			printf("\n");
		}
		printf("Would you like to run this program again (y,n)?\n");
		scanf(" %c", &userChar);
	}

	return 0;
}
