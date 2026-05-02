//null_ptr.c
/*
NULL is a pointer that points to nothing.
You can't use such a pointer - the program will crash.
Therefore, we check for NULL pointers before using them.
*/
#include <stdio.h>

int main() {
    int *ptr = NULL; // the pointer doesn't point to anything
    // Check before use (this is the main rule!)
    if(ptr == NULL) {
    //!= means if not equal
        printf("The pointer is empty, you can't use it\n");
    }
    // You CANNOT do this - the program will crash with a segmentation fault
    // printf("%d", *ptr); // ERROR!
    // Correct: allocate memory or assign an address
    int value = 255;
    ptr = &value; // now ptr points to value
    if(ptr != NULL) { // check again
        printf("Now you can: %d\n", *ptr);  // 255
    }
    //ptr is an abbreviation for pointer
    return 0;
}
