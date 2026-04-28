//infinity.c
/*
Using the while loop, you
can create an infinite loop
in programming. This is a bug
but it is important for operating
systems and programs that run endlessly.
*/
#include <stdio.h>
//with a cycle for this is also possible
int main() {
    int a = 0;
    while(1) {
        printf("%d\n", a);
        a++;
        //result:
        //1
        //2
        //3
        //4
        //5
        //6
        //7
        //8
        //9
        //10
        //...100
        //...200
        //...1000
        //...50000
        //...100000
        //2 147 483 647.
        /*
        and so on up to 2,147,483,647
        because this is the maximum
        value that a 32-bit integer
        variable of type int can store.
        */
    }
    //loop for
    int j = 0;
    for(;;) {
        printf("%d\n", j);
        j++;
        if(j == 1488) { return 1; } //function if.
        //result:
        //1
        //2
        //3
        //4
        //5
        //6
        //7
        //8
        //9
        //10
        //...100
        //...200
        //...1000
        //1488
    }
    return 0;
}





