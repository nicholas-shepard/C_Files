#include<stdio.h>
#include <string.h>

char PrintMenu(char aString[]) {
   char userChar;
   
   printf("\nMENU\n");
   printf("c - Number of non-whitespace characters\n");
   printf("w - Number of words\n");
   printf("f - Fix capitalization\n");
   printf("r - Replace all !'s\n");
   printf("s - Shorten spaces\n");
   printf("q - Quit\n\n");
   
   printf("Choose an option:\n");
   
   scanf(" %c", &userChar);

   if (userChar == 'c') {
      printf("\nNumber of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(aString));
   }

   else if (userChar == 'w') {
      printf("\nNumber of words: %d\n", GetNumOfWords(aString));
   }

   else if (userChar == 'f') {
      FixCapitalization(&aString, strlen(aString));
      printf("\nEdited text: %s\n", aString);
   }

   else if (userChar == 'r') {
      ReplaceExclamation(&aString, strlen(aString));
      printf("\nEdited text: %s\n", aString);
   }

   else if (userChar == 's') {
      ShortenSpace(&aString, strlen(aString));
      printf("\nEdited text: %s\n", aString);
   }
   
   return userChar;
}

int GetNumOfNonWSCharacters(char string1[]) {
   int counter = 0;
   for (int i = 0; i < strlen(string1); i++) {
      if (isspace(string1[i]) == 0) {
         counter += 1;
      }
   }
   return counter;
}

int GetNumOfWords(char string2[]) {
   int counter = 0;
   for (int i = 0; i < strlen(string2); i++) {
      if (isspace(string2[i]) != 0) {
         if (isspace(string2[i + 1]) == 0) {
            counter += 1;
         }
      }
   }
   return counter;
}

void FixCapitalization(char string3[], int string3len) {
   string3[0] = toupper(string3[0]);
   for (int i = 0; i < string3len; i++) {
      if ((string3[i] == '.') || (string3[i] == '!') || (string3[i] == '?')) {
         int j = i + 1;
         while (isspace(string3[j]) != 0) {
            string3[j + 1] = toupper(string3[j + 1]);
            j += 1;
         }
      }
   }
}

void ReplaceExclamation(char string4[], int string4len) {
   for (int i = 0; i < string4len; i++) {
      if (string4[i] == '!') {
         string4[i] = '.';
      }
   }
}

void ShortenSpace(char string5[], int string5len) {
   for (int i = 0; i < string5len; i++) {
      if (isspace(string5[i]) != 0) {
         while (isspace(string5[i + 1]) != 0) {
            int j = i + 1;
            for (j; j < strlen(string5); j++) {
               string5[j] = string5[j + 1];
            }
         }
      }
   }
}

int main() {
   char userString[256];
   char menuChoice = 't';

   printf("Enter a sample text:\n");
   fgets(userString, 256, stdin);
   
   printf("\n");
   
   printf("You entered: %s\n", userString);
   
   while (menuChoice != 'q') {
      menuChoice = PrintMenu(userString);
   }
   //ShortenSpace(userString, strlen(userString));
   //printf("Edited text: %s\n", userString);
   
   
   return 0;
}
