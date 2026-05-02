//basics.c
/*
A pointer is a variable that stores the
address of another variable in memory
Instead of storing a number or letter
a pointer stores the memory address
of that variable.
*/
/*
the value of a variable can be
changed absolutely correctly using pointers
*/
#include <stdio.h>

int main() {
    int test = 128;
    int *pointer = &test;
    /*
    * in init says that this variable is a pointer
    & takes the address of the variable
    * in the code takes the value and not the address
    */
    *pointer = 255;
    printf("%d", *pointer); //255
    printf("%d\n", test); //255 too because the pointer modifies the original variable
    //The value of a variable can be changed via a pointer
    printf("%p", *pointer); //0xff (address of variable test) %p
    return 0;
    //Pointers are the basis of all memory management
}
