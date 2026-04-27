//string_problem.c
#include <stdio.h>
/*
The main disadvantage of scanf is that it 
reads up to a space, that is, if you want
to enter your full name, Alex Smith, then
Alex can be printed using printf, but Smith
will remain in the input buffer. The solution
to this problem is fgets, which reads the line
including spaces.
*/
int main() {
  //Incorrect:
  printf("incorrect\n");
  char Fname[20];
  printf("Enter you full name: "); //Alex Smith 
  scanf("%s", Fname); //will read only up to the first space
  printf("%s\n", Fname); //Alex only
  //result:
  /*
  incorrect:
  Enter you full name: Alex Smith
  Alex
  */
  //Correct 
  printf("correct\n");
  printf("Enter you full name: "); //Alex Smith 
  fgets(Fname, 20, stdin); //will read all
  printf("%s", Fname); //Alex Smith 
  return 0;
  }
  //important this code will not work in one file.
