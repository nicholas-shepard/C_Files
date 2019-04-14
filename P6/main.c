#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
//#include "list.h"


int main(int argc, char * argv[]) {

	char name[50];
	student students[50];
	int i = 0;

	FILE* inFile = NULL;
	inFile = fopen(argv[1], "r");

	while (!feof(inFile)) {
		fgets(name, 50, inFile);
		strcpy(students[i].name, name);
		students[i].votes = 0;
		students[i].rank = i + 1;
		printf("%d, %d, %s", students[i].rank, students[i].votes, students[i].name);
		i++;
	}


	return 0;
}
