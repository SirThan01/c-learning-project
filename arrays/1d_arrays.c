//1d_arrays.c 
/*
An array is a sequence of
char or int, written something
like char test[5] or int test[5]
the number in square brackets
indicates the number of elements in the array.
*/
#include <stdio.h>

int main() {
char test[5];
scanf("%s", &test);
printf("%s", test);
/*
If you enter, for example, hello, it 
is displayed on the screen, but if the
word contains more than the specified
value, a buffer overflow will occur.
*/
}
