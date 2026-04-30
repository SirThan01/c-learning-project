//types.c
/*
In the C language, data types
are divided into basic
(integer, real, character)
derived (arrays, pointers, structures, unions)
and void. The basic arithmetic types are char
(characters), int (integers)
float (single precision)
and double (double precision)
extended by the modifiers short
long, signed, and unsigned.
*/
//char stores one character, usually 1 byte
//int stores a number, usually 4 bytes
//float stores a floating-point number, usually 8 bytes
//void a type without values, used to indicate that
//function has no return value.
/*
short decreases the size of the
integer type, typically 2 bytes.
long increases the size of the integer type
typically 4 or 8 bytes
long long guaranteed to be 8 bytes.
signed the default signed type for int.
unsigned unsigned type (positive only).
*/
#include <stdio.h>

int main() {
    int a = 1;
    float b = 3.33;
    double c = 3.3333333;
    long d = 1000L;
    long long i = 100000LL;
    int f[5] = {1, 3, 65, 42, 53};
    long double g = 983.01817727;
    short h = 20;
    unsigned char s = 255;
    char n = 'A';
    unsigned int uu = 50U;
    return 0;
}


