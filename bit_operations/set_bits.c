//set_bits.c
/*
Set, clear, and test individual bits.
Bits are numbered starting with 0 (least significant).
Set bit n: x |= (1 << n)
Clear bit n: x &= ~(1 << n)
Test bit n: (x & (1 << n)) != 0
Toggle bit n: x ^= (1 << n)
*/
#include <stdio.h>

int main() {
unsigned char flags = 0b00000000; // all bits 0

// Set bit 2 (the third bit)
flags |= (1 << 2); // 00000100 = 4
printf("After setting bit 2: %d\n", flags);

// Set bit 5
flags |= (1 << 5);  // 00100100 = 36
printf("After setting bit 5: %d\n", flags);

// Check bit 2
if(flags & (1 << 2)) {
printf("Bit 2 is set\n");
}

// Clear bit 2
flags &= ~(1 << 2); // 00100000 = 32
printf("After clearing bit 2: %d\n", flags);

// Toggle bit 5 (1 to 0)
flags ^= (1 << 5); // 00000000 = 0
printf("After toggling bit 5: %d\n", flags);

// Toggle back (0 to 1)
flags ^= (1 << 5);  // 00100000 = 32
printf("After switching back: %d\n", flags);

return 0;
}
