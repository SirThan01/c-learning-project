//multiple.c
#include <stdio.h>
/*
of course, you don't need to know this,
but with scanf you can write values to
several variables at once; it's all quite simple.
*/
int main() {
   int age; //your age.
   int height; //your height.
   char letter; //random letter.
   printf("Enter your age, height, and a random letter\n"); //what to do
   scanf("%d %d %c", &age, &height, &letter); //multi-scanf 
   printf("Age: %d\n", age); //result 
   printf("Height: %d\n", height); //result 
   printf("Letter: %c\n", letter); //result 
   return 0;
}
//this helps when you want to make
//your code compact and beautiful.
