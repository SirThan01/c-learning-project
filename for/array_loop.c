//array_loop
/*
Using the for loop,
you can go through
and print all the elements
of the array, that is, the
same char name[50] or int name[]
*/
#include <stdio.h> //library 

int main() {
    int name[5] = {10, 20, 66, 43, 26};
//init int array
    for(int i = 0; i < 5; i++) {
        printf("%d ", name[i]);
    }
    printf("\n");
    //result:
    /*
    10 20 66 43 26
    */
    char a[20] = {"hello"};
    for(int i = 0; i < 6; i++) {
        printf("%c ", a[i]);
    }
    //result:
    /*
    10 20 66 43 26
    h e l l o
    */
}
