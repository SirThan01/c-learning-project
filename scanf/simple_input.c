//simple_input.c
#include <stdio.h>
/*
The standard library stdio.h has a scanf function
 that can receive information from the user via
  the keyboard. It can read both numbers and words.
   I think the back of the class has figured out why
     this file is dangerous if you write information to arrays.
*/
int main() {
  int test; //we initialize the variable but do not use it.
  scanf("%d", &test);
  /*
  & is needed to enter a value into a variable,
  in this case it is called test but you can name
  it as you wish
  */
  printf("%d", test);
  //result:
  //input: 5
  //conclusion: 5
  /*
  5
  5
  */
  //Now you will enter your name and it will be displayed.
  char name[20]; //array
  scanf("%s", name);
  printf("Your name: %s", name);
  //result
  /*
  5
  5Alex
  Your name: Alex
  */
  //Try to solve this problem yourself
  //for the sake of repetition
  return 0;
  }
  //As you can see, in scanf you need to specify the data 
  //type otherwise it will be a garbage value.
