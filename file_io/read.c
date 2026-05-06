//read.c
/*
Files are needed to ensure that data isn't lost after the program closes.
Reading from a file:
1. fopen() - open the file
2. fgets() - read line by line
3. fclose() - close (important!)
"r" means read
*/
#include <stdio.h>

int main() {
// fopen returns a pointer to FILE
// If the file doesn't exist, it returns NULL
FILE *file = fopen("data.txt", "r");

if(file == NULL) {
printf("File data.txt not found\n");
return 1;
}

char buffer[100];  // We'll read lines here

// fgets reads one line until it encounters \n
// Returns NULL when the file is finished
while(fgets(buffer, sizeof(buffer), file) != NULL) {
printf("%s", buffer); // Print what we've read
}

fclose(file); // Be sure to close
return 0;
}
