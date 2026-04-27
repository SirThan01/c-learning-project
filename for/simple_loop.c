//simple_loop.c
#include <stdio.h>
/*
Now I'll show you how to
create counters using a loop for
*/
int main() {
    for(int i = 0; i <= 5; i++) { //cycle for
        printf("%d\n", i); //we print the variable i with \n
        //result:
        /*
        0 //initial value
        1 //+1
        2 //+1
        3 //+1
        4 //+1
        5 //+1
        stop because i == 5
        */
    }
    printf("\n");
    //int i = 0;
    /*
    First, we create a variable inside
    the for loop and assign it the value 0
    */
    //i < 5;
    /*
    then we set the condition that
    while i is less than five
    */
    //i++
    /*
    i++ means that with each interation
    i will increase by 1, you can also
    make i-- then it will decrease by
    1 with each interation you can change
    the condition and value of i to see other
    results, it is not necessary to create a
    variable specifically i, you can call it
    whatever you want, you can even call it
    iwjvd and other things
    */
    for(int iwjvd = 10; iwjvd >= 1; iwjvd--) {
    printf("%d\n", iwjvd);
    }
    //This is one of the most used commands in the C language.
}
