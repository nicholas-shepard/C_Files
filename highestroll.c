#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand((int)time(0));
	int die1 = ((rand() % 6) + 1);
	int die2 = ((rand() % 6) + 1);
	int die3 = ((rand() % 6) + 1);
	int die4 = ((rand() % 6) + 1);
	int die5 = ((rand() % 6) + 1);

	int total = die1 + die2 + die3 + die4 + die5;

	int die[5] = {die1, die2, die3, die4, die5};
	
	int maxDie;
	int minDie;

	maxDie = die[0];
	minDie = die[0];
	
	for(int i = 0; i < 5; i = i + 1){
		if (die[i] > maxDie){
			maxDie = die[i];
		}
	}

	for(int n = 0; n < 5; n = n + 1){
		if (die[n] < minDie){
			minDie = die[n];
		}
	}
		

	char firstName[50];
	char lastName[50];
 
	printf("Please enter your first and last name:\n");
	scanf(" %s %s", firstName, lastName);
	printf("Hello %s %s! You rolled:\n", firstName, lastName);
	printf("Die 1: %d\n", die1);
	printf("Die 2: %d\n", die2);
	printf("Die 3: %d\n", die3);
	printf("Die 4: %d\n", die4);
	printf("Die 5: %d\n", die5);
	printf("The total of your 5 die is: %d\n", total);
	printf("The maximum die is: %d\n", maxDie);
	printf("The minimum die is: %d\n", minDie);
	
	return 0;
}
