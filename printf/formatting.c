#include <stdio.h>

int main() {
  int number = 255; 
  //create integer variable 
  printf("Number %d", number);
  //Instead of number, enter the name
  //of your variable.
  //%d means that you need to print 
  //the value of the variable EXACTLY
  //in this place
  //After all the " you must put , and
  //after that you must indicate the 
  //variable name
  //okay float num now
  float a = 25.5;
  //Float means the number has
  //a fractional part.
  printf("Number %f", a);
  //if you want a certain number of numbers
  printf("Number %.2f", a);
  //You need to specify the number
  //of numbers like %.2f and as many
  //as you want, like up to
  //7-8 %.7f, %.3f
  //Next come arrays and symbols
  char symbol = 'a';
  //cummon char variables can store exactly
  //one character
  printf("Symbol %c", symbol);
  //I'll show you how you can save your name
  //in an array of those same characters.
  char your_name[15] = "Graphite";
  //[] means that this is an array and
  //the value inside them means the
  //number of characters
  printf("Name %s", your_name);
  //There is also a double, which is the
  //same float but with double precision.
  return 0;
}
//Don't be surprised if all the lines
//stick together into one
