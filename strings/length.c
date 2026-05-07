//length.c
/*
Strings in C are arrays of characters, the last character being a '\0' (the null terminator).
Without the '\0', functions won't know where the string ends.
strlen - counts the number of characters up to '\0'
strcpy - copies a string from one array to another (including '\0')
Requires <string.h>
*/
#include <stdio.h>
#include <string.h>
int main() {
char word[] = "Hello"; // an array of 6 characters: H e l l o \0
char destination[20];
// strlen returns 5 (doesn't count \0)
int len = strlen(word);
printf("The length of the string '%s' is %d\n", word, len);  // 5
// strcpy copies including \0
strcpy(destination, word);
printf("Copy: %s\n", destination);
// Manual length calculation (how strlen works)
int manual_len = 0;
while(word[manual_len] != '\0') {
manual_len++;
}
printf("Manual length calculation: %d\n", manual_len); // 5
return 0;
}
