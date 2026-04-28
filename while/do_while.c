//do_while.c
//used when the loop needs to
//be executed at least once
#include <stdio.h>
//first does, then fulfills the condition
int main() {
    int j = 10;
    do {
        printf("Hello\n");
        j--;
    } while(j >= 5);
    //while comes after } and ends;
    //This function is not very popular.
    //But you need to know it.
    //array loop
    char a[20] = "hello";
    int i = 0;
    do {
        printf("%c ", a[i]);
        i++;
    } while (a[i] != '\0');
    //result:
    //h e l l o
    //total result:
    /*
    Hello
    Hello
    Hello
    Hello
    Hello
    Hello
    h e l l o
    */
    return 0;
}
