#import <stdio.h>

int main(void)
{
	char userName1[50];
	char userName2[50];
	
	printf("Enter your name:\n");
	scanf("%[^\n", userName1);
	printf("Enter another:\n");
	scanf("%[^\n", userName2);
	printf("%s %s\n", userName1, userName2);
	
}
