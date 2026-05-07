//parse.c
/*
strtok - splits a string into parts (tokens) based on a delimiter.
First call: pass the string and delimiters (e.g., " ,.")
Subsequent calls: pass NULL to continue from the same place.
DANGER: strtok modifies the original string (replaces delimiters with \0)!
*/
#include <stdio.h>
#include <string.h>
int main() {
// Example 1: split a CSV string
char csv[] = "apple,banana,cherry,date";
char *token;

printf("Original string: %s\n", csv);
// First call
token = strtok(csv, ",");
 // Continue while token != NULL
while(token != NULL) {
printf("Token: %s\n", token);
token = strtok(NULL, ","); // next call with NULL
}
// After strtok, the original string has changed!
// All ',' are replaced with '\0'
printf("After changes: ");
for(int i = 0; i < sizeof(csv); i++) {
if(csv[i] == '\0')
printf("[\\0]");
else
printf("%c", csv[i]);
}
printf("\n");
// Example 2: Parsing a string with spaces
char sentence[] = "one two three";
printf("\nParsing by spaces: ");
 char *part = strtok(sentence, " ");
     while(part != NULL) {
         printf("'%s' ", part);
         part = strtok(NULL, " ");
     }
     printf("\n");
     return 0;
}
