#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];
	char *ptr;
	ptr = str;
	int vows = 0;
	int cons = 0;
	int digits = 0;
	int spaces = 0;

	printf("Enter a string:\n");
	scanf(" %[^\t\n]s", str);

	
    	while(*ptr != '\0') {
        	if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            		vows++;
		}
        	else if (isdigit(*ptr) != 0) {
            		digits++;
		}
		else if (isspace(*ptr) != 0) {
			spaces++;
		}
		else {
			cons++;
		}
		
		ptr++;
    	}

	printf("\nVowels: %d\n", vows);
	printf("\nConsonants: %d\n", cons);
	printf("\nDigits: %d\n", digits);
	printf("\nSpaces: %d\n", spaces);



	return 0;
}
