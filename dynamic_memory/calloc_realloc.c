//calloc_realloc.c
/*
calloc - like malloc, but zeroes out memory.
realloc - resizes already allocated memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
// calloc: allocate 3 ints, all = 0
int *arr = (int*)calloc(3, sizeof(int));
if(arr == NULL) return 1;

arr[0] = 10;
arr[1] = 20;
arr[2] = 30;

// realloc: expand to 5 elements
int *new_arr = (int*)realloc(arr, 5 * sizeof(int));
if(new_arr == NULL) {
free(arr);
return 1;
}
arr = new_arr;
    
     arr[3] = 40;
     arr[4] = 50;
    
     for(int i = 0; i < 5; i++) {
         printf("%d ", arr[i]);   // 10 20 30 40 50
     }
    
     free(arr);
     return 0;
}
