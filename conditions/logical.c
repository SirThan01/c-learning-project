//logical.c
/*
Now let's consider the possibility
of fulfilling a condition if it is
necessary for 2 variables to be equal
to the same value, and also if at least
one variable is equal to the specified
value, the condition is fulfilled
*/
#include <stdio.h>
//There is && (and) and || (or)
int main() {
    int test = 1;
    int test1 = 7;
    if(test == 1 && test1 == 7) {
        printf("fine!");
    }
    else {
        return 1;
    }
    /*
    If test is 1 or test1 is 7
    the program prints fine!
    If nothing matches, the
    program terminates.
    */
    //in this case everything is fine
    //and
    if(test == 1 && test1 == 5) {
        printf("fine");
    }
    else {
        return 1;
    }
    /*
    If test and test1 are both equal
    to 1, then everything is fine
    otherwise the program will terminate.
    */
}
