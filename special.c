//special.c
/*
What I missed in other folders:
- static - the variable never dies
- const - the position of the asterisk matters
- sizeof() - parentheses aren't always needed
- typedef - creates an alias
- enum - a list of constants
- inline - a compiler hint
- volatile - don't optimize reads/writes
- restrict - promise that pointers are different
- ?: - ternary operator
*/
#include <stdio.h>
// 1. static
void counter(void) {
static int count = 0;
// static before the type. Initialized once.
// Without static, the variable would be re-created on every call.
count++;
printf("%d\n", count);
}
// 2. const in pointers
void const_examples(void) {
int a = 10, b = 20;
const int *p1 = &a;
// const * - data at the address cannot be changed
// p1 = &b; can, *p1 = 5; cannot
int *const p2 = &a;
// *const - the address in the pointer cannot be changed
// *p2 = 5; can, p2 = &b; cannot
const int *const p3 = &a;
// const *const - neither the data nor the address can be changed
}
// 3. sizeof is an operator, not a function
void sizeof_examples(void) {
int a = 10;
int arr[10];
sizeof a; // parentheses are not needed for variables
sizeof(int);  // required for types
int len = sizeof(arr) / sizeof(arr[0]);
// sizeof(arr) - size of the entire array in bytes
// sizeof(arr[0]) - size of one element
// division = number of elements
}
// 4. typedef
typedef unsigned int uint;
// written: typedef old_type new_alias;
// now uint is unsigned int
typedef struct { int x; int y; } Point;
// you can directly name the structure without the struct before Point
// 5. enum
enum Color { RED, GREEN, BLUE };
// written: enum name { constant1, constant2 };
// RED = 0, GREEN = 1, BLUE = 2 automatically
enum Status { OK = 0, ERROR = 1 }; 
// You can set values manually
// 6. inline
inline int square(int x) {
return x * x;
}
// Write: inline type name(parameters)
// The compiler may insert code instead of the call
// Not guaranteed, the compiler decides for itself
// 7. volatile
volatile int flag = 1;
// volatile before the type
// Prevents the compiler from optimizing reads/writes
// For variables that change externally (interrupts, hardware)
// 8. restrict
void add_arrays(int *restrict a, int *restrict b, int n) {
for(int i = 0; i < n; i++) {
a[i] = a[i] + b[i];
 }
}
// *restrict - the pointer is unique, no intersections
// programmer's promise, otherwise undefined behavior
// 9. ?: ternary operator
void ternary_example(int x) {
int abs = (x < 0) ? -x : x;
// syntax: condition ? value_if_true : value_if_false
// like if but returns a value
}
int main(void) {
counter();
counter();
sizeof_examples();
return 0;
}
