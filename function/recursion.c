//recursion.c
/*
Recursion is when a function calls itself.
An exit condition is required, otherwise there will be an infinite call and a stack overflow.
Factorial is a classic example: 5! = 5 * 4 * 3 * 2 * 1
*/

int factorial(int n) {
if(n <= 1) { // exit condition
return 1; // 0! = 1, 1! = 1
}
return n * factorial(n - 1); // recursive call
/*
factorial(5)
5 * factorial(4)
4 * factorial(3)
3 * factorial(2)
2 * factorial(1)
1 * 2 * 3 * 4 * 5
*/
}

int main(void) {
int result = factorial(5); // 120

return 0;
}
