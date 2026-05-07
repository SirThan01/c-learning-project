//compare_concat.c
/*
strcmp - compares strings character by character (by ASCII codes)
Returns:
0 - strings are the same
>0 - first string is GREATER
<0 - first string is LESS
strcat - appends the second string to the end of the first
WARNING: the first string must have enough space!
*/
#include <stdio.h>
#include <string.h>
int main() {
char first[] = "abc";
char second[] = "abc";
char third[] = "abd";
// Compare
if(strcmp(first, second) == 0) {
printf("'%s' and '%s' are equal\n", first, second);
}
int cmp = strcmp(first, third);
 if(cmp < 0) {
printf("'%s' is less than '%s' (difference = %d)\n", first, third, cmp);
}
// Concatenation
char result[50] = "Hello ";
strcat(result, "World");
printf("Concatenation: '%s'\n", result); // "Hello World"
// What happens if there's not enough space?
char small[10] = "Hi ";
strcat(small, "there"); // 6 characters + \0 fits
// strcat(small, " everyone"); // ERROR! overflow
return 0;
}
