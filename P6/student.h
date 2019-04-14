#include <stdio.h>

typedef struct student_struct {
	char name[50];
	int votes;
	int rank;
	struct student_struct* nextNodePtr;
} student;

void CreateStudent(char name[]);
