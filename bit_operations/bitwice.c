//bitwise.c
/*
Bitwise operations operate on each bit of a number separately.
& - AND (1 only if both are 1)
| - OR (1 if at least one is 1)
^ - XOR (1 if the bits are different)
~ - NOT (inversion, flips all bits)

Example for 8 bits (for clarity):
a = 60 (0011 1100)
b = 13 (0000 1101)
*/
#include <stdio.h>

int main() {
unsigned char a = 60; // 0011 1100
unsigned char b = 13; // 0000 1101

// AND
unsigned char c = a & b; // 0000 1100 = 12
printf("%d & %d = %d\n", a, b, c);
    
     //OR
     c = a |  b;   // 0011 1101 = 61
     printf("%d | %d = %d\n", a, b, c);
    
     // XOR
     c = a^b;   // 0011 0001 = 49
     printf("%d ^ %d = %d\n", a, b, c);
    
     // NOT
     c = ~a;   // 1100 0011 = 195 (for unsigned char)
     printf("~%d = %d\n", a, c);
    
     return 0;
}
