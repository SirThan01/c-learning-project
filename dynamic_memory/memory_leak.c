//memory_leak.c
/*
A memory leak occurs when memory is allocated but not freed.
In large programs, memory runs out.
*/

#include <stdlib.h>

int main() {
// INCORRECT: memory not freed
int *leak = (int*)malloc(100 * sizeof(int));
leak[0] = 42;
// Forgot to free(leak) - leak!

// CORRECT:
int *good = (int*)malloc(100 * sizeof(int));
good[0] = 42;
free(good); // freed
good = NULL; // to prevent accidental use

return 0;
}
