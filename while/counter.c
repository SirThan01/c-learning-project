//counter.c
//In the C language there is another
//cycle that is very similar in
//appearance to for
#include <stdio.h>
/*
In the for loop, you know
how many iterations there
will be, but in the while
loop, you don't know
In the for loop, the counter
is inside the brackets, but
in the while loop, it is declared
separately and is not required.
*/
int main() {
    int i = 1;
    while(i <= 5) {
        printf("%d\n", i);
        i++;
    }
    //result:
    //1
    //2
    //3
    //4
    //5
    //array loop
    int arr[3] = {62, 1488, 5};
    int j = 0;
    while(j < 3) {
        printf("%d ", arr[j]); //%d 
        j++;       //               ^
    }
    //result:
    //62 1488 5
    return 0;
}
