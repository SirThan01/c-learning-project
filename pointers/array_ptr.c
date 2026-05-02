//array_ptr.c
/*
Arrays and pointers in C are directly related.
The name of an array is a pointer to its first element.
I'll show how to work with an array via a pointer.
*/
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // numbers is already a pointer, & is not needed
    /*
    The array name itself is a pointer to the
    first element of the array, this is very important to remember
    */
    /*
    *ptr is the value pointed to by ptr
    This is how we get the first element
    */
    printf("%d\n", *ptr); // 10

    /*
    ptr + 1 advances the pointer to the next element
    * (ptr + 1) is the second element
    */
    printf("%d\n", *(ptr + 1)); // 20
    printf("%d\n", *(ptr + 2));  // 30
    // *(ptr + 1)
    /*
    Parentheses (ptr + 1) - first shift the pointer
    * - then dereference (take the value at the address)
    Without parentheses, *ptr + 1 would mean: take the value of ptr (10) and add 1 = 11
    The parentheses are needed so that the shift occurs BEFORE the dereference
    */
    /*
    You can loop through the entire array
    */
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    /*
    The pointer can be moved using the ++ and -- operators
    */
    int *moving = numbers;
    printf("%d ", *moving); // 10
    moving++;
    printf("%d ", *moving); // 20
    moving++;
    printf("%d\n", *moving);  // 30

    return 0;
}
