//typedef.c
/*
typedef - create an alias for a type.
No need to write "struct" every time.
*/

typedef struct {
int x;
int y;
} Point;

int main(void) {
Point pos = {10, 20}; // without the word "struct"
pos.x = 30;

return 0;
}
