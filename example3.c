#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){

char string1[10] = "abcxyz"; 
char string2[10] = "xyz";
char newText[10] = ""; 
char* subStr = NULL; 

if (strcmp(string1, string2) == 0) {      // abcxyz does not equal xyz
    printf("String1 is equal to String2\n");
}
if (strcmp(&string1[3], "xyz") == 0) {   // xyz equals xyz
    printf("Second half of string 1 is equal to String2\n");
}
subStr = &string1[3];                     // Points to 'x' in string1
if (strcmp(subStr, string2) == 0) {       // xyz equals xyz
    printf("subStr points to second half of string1\n");
}
strcpy(newText, subStr);                  // newText is now "xyz"
printf("nexText: %s\n",newText);

return 0;
}

