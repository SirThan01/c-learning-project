//shifts.c
/*
Shifts move bits left or right.
<< - left (multiply by 2)
>> - right (divide by 2)
Empty bits are filled with zeros (for unsigned).
*/
#include <stdio.h>

int main() {
unsigned char x = 5; // 0000 0101

// Left shift
unsigned char left = x << 1; // 0000 1010 = 10 (5*2)
printf("%d << 1 = %d\n", x, left);

left = x << 2; // 0001 0100 = 20 (5*4)
printf("%d << 2 = %d\n", x, left);

 // Right shift
unsigned char right = 20 >> 1; // 0000 1010 = 10 (20/2)
printf("20 >> 1 = %d\n", right);

right = 20 >> 2; // 0000 0101 = 5 (20/4)
printf("20 >> 2 = %d\n", right);

// Fast multiplication/division by powers of 2
int y = 7;
printf("%d * 8 = %d\n", y, y << 3); // 7 * 8
printf("%d / 4 = %d\n", y, y >> 2); // 7 / 4 = 1
// NOTE: >> is undefined for negative numbers

return 0;
}
