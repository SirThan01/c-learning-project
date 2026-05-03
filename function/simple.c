//simple.c
/*
Functions are the basis of everything
int main is also a function, it’s just
where the program begins.
*/
/*
stdio.h is not necessarily just a library
for input and output, printf, scanf, etc.
*/
void hello() {
    char hello[5] = "hello";
    //void is a function that returns nothing.
}

int calc(int a, int b) {
    return a + b;
    //we return the value a + b
}

int divide(int a, int b);
//We can also initialize the function
//but not write the body right away.
int main() {
    int s = 5;
    int q = 22;
    //we create variables to use in the function
    calc(s, q);
    hello(); //just call
    divide(s, q);
    //instead of a b we pass s q
    return 0;
}

int divide(int a, int b) {
    if(b == 0) {
        return 1;
    }
    return a / b;
}
//return a divided by b
//If the second number is 0, then as a rule
//it cannot be divided by zero.
