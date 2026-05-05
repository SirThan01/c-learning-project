//malloc.c
/*
Dynamic memory - allocating memory while the program is running.
malloc - memory allocate, allocates a block of memory in bytes.
Returns a pointer to the allocated memory or NULL if unsuccessful.
Be sure to check for NULL and call free when no more is needed.
*/
#include <stdio.h>
#include <stdlib.h> // malloc, free

int main() {
int *ptr;
int size = 5;

// Allocate memory for 5 integers (5 * 4 bytes = 20 bytes)
ptr = (int*)malloc(size * sizeof(int));

// Error checking
if(ptr == NULL) {
printf("Error: memory not allocated\n");
return 1;
 }

// Use it as a regular array
for(int i = 0; i < size; i++) {
ptr[i] = i * 10;
printf("ptr[%d] = %d\n", i, ptr[i]);
}

// Free up memory (mandatory!)
free(ptr);
ptr = NULL; // good habit

return 0;
}
