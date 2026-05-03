// return_value.c
/*
The function can calculate a value and return it.
The return type is specified instead of void.
*/
#include <stdio.h>

// The function returns int
int add(int a, int b) {
return a + b; // return passes the result back
}

int main() {
int result = add(5, 3);
printf("Sum: %d\n", result); // 8
return 0;
}
