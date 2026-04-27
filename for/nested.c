//nested.c
#include <stdio.h>
/*
A nested loop is useful when you
need to repeat a series of actions
and each of them itself requires repetition.
*/
/*
Inner loops are not used as often
as for but you can also know this
*/
int main() {
    for (int i = 1; i <= 5; i++) { //cummon loop for
        for (int j = 1; j <= 5; j++) {   //Inner loop for
            printf("%d ", i * j);
        } //End of inner loop for
        printf("\n");
    } //End of full loop for
    //result:
    /*
    1 2 3 4 5
    2 4 6 8 10
    3 6 9 12 15
    4 8 12 16 20
    5 10 15 20 25
    */
    //This is a simple multiplication table
    //the nested loop works first
    /*
    The inner loop is difficult to explain
    in simple terms, but I came up with an easy rule.
    */
    /*
    When the normal loop is executed
    once, the internal one completely
    performs all its interations purely
    according to the value specified in the code
    */
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 10; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    /*
    The inner loop works as usual
    It's just inside another loop
    and therefore runs multiple times.
    */
    return 0;
}
