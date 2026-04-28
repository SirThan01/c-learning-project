//if_basics.c
/*
if else if else is one of the most
popular functions in the C language
they are needed to check whether
something is true, if so, then
the code inside the function
will be executed
*/
#include <stdio.h>
/*
We use scanf to let the
user enter their age
and the program will
check if you are of legal age.
*/
int main() {
    /*
    This is somewhat similar
    to the for and while loops
    in that if true, the code
    inside {} is executed.
    */
    int age;
    //initialize but do not give
    //he variable an initial value
    scanf("%d", &age);
    /*
    we let the user enter
    a value into the age variable
    */
    if(age < 18) { //case if < 18
        printf("you are minor");
    }
    else { //all other cases
        printf("you are adult");
    }
    //analysis
    /*
    if you are under 18 the program prints
    you are an adult, in all other cases
    the program prints you are adult 
    */
    //elif
    /*
    Also, in addition to if, else, there
    is else if (one operator), it means
    another test case, as if it is
    written after if and before else
    */
    //else if(age == 29) {
    //printf("you age is 29");
    //switch case
    /*
    If else is intended for both masses
    and numbers, but there is another 
    option, switch case, which works 
    great with numbers. In the future
    you will most likely use switch
    case in complex problems with numbers.
    */
    return 0;
}
    
