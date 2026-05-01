//string.c
/*
In C, a string is a sequence of char
but a string can only be implemented
through a char array; it is explained
as char name [], just like other arrays.
*/
/*
Values can be entered into arrays
either manually or using scanf and
similar functions
*/
#include <stdio.h>

int main() {
    char name[50];
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
    return 0;
}
