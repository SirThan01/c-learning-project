//switch_case.c
/*
syntax:
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}

rules:
expression must be int or char (NOT float or string)
case values must be unique constants
break exits the switch
default runs if no case matches
*/

#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);
    
    switch (grade) {
        case 5:
            printf("Excellent\n");
            break;
        case 4:
            printf("Good\n");
            break;
        case 3:
            printf("Satisfactory\n");
            break;
        case 2:
            printf("Poor\n");
            break;
        case 1:
            printf("Unsatisfactory\n");
            break;
        default:
            printf("Unknown grade\n");
    }
    
    return 0;
}

/*
mistakes
1 forgetting break (fall through)
   switch(x) {
       case 1: printf("One");
       case 2: printf("Two");  // Runs if x equals 1 OR x equals 2
   }

2 using float or string 
   switch(1.5) { }   // ERROR
   switch("hi") { }  // ERROR

3 duplicate case
   case 1: ... case 1:  // ERROR

4 use var in case
   int y = 5; case y:     // ERROR (must be constant)
5 no default case

6 duplicate same code 
   switch(letter) {
       case 'a':
       case 'e':
       case 'i':
           printf("Vowel\n");
           break;
   }
*/
