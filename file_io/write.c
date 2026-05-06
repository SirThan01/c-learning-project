//write.c
/*
Writing to a file:
"w" - write
If the file doesn't exist, it will create it
If it does, it will overwrite it (deleting the old file!)
*/
#include <stdio.h>

int main() {
// "w" - create or overwrite
FILE *file = fopen("output.txt", "w");

if(file == NULL) {
printf("Failed to create file\n");
return 1;
}

// fprintf - like printf, but writes to a file
fprintf(file, "Hello, File!\n");
fprintf(file, "Number: %d\n", 42);

fclose(file);
printf("Written to output.txt\n");

return 0;
}
