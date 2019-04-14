#include <stdio.h>

int main(int argc, char * argv[])
{

	char name[50];
	FILE* inFile = NULL;
	inFile = fopen(argv[1], "r");
	while (!feof(inFile)) {
		fscanf(inFile, "%s", name);
		printf("%s\n", name);
	}
}
