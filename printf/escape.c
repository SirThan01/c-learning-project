#include <stdio.h>

int main() {
  //Before this, all your lines were
  //merged into one. Here is an example
  //of such code:
  printf("Hello");
  printf("World");
  printf("25");
  //output: HelloWorld25
  //To keep your code on separate
  //lines, you need to write \n inside
  //"text\n";
  //correct code:
  printf("Hello\n"); //\n
  printf("World\n"); //\n
  printf("25\n"); //\n
  //If you want it on one line:
  printf("Hello World 25");
  //or
  printf("Hello ");
  printf("World ");
  printf("25");
  //just indent
  return 0;
  }
  //Now your text won't stick together
