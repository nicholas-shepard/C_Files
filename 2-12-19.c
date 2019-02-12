#include <stdio.h>

int main (void) {
	
	int i, n;
	int* element = NULL;
	n = 10;


	element = (int*)malloc(n*sizeof(int));
	printf("\n");
	
	for (i = 0; i < n; i++) {
		printf("Value: ");
		scanf("%d", (element + i));
	}
	printf("%d%d%d", i, n, element);

	return 0;
}
