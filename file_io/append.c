//append.c
/*
"a" - append
Different from "w": doesn't erase the file, but appends it to the end.
Useful for logs.
*/
#include <stdio.h>

int main() {
// "a" - open for appending
FILE *file = fopen("log.txt", "a");
if(file == NULL) {
printf("Error\n");
return 1;
}
// Each run will append a new line
fprintf(file, "Program started\n");
fclose(file);
return 0;
}
