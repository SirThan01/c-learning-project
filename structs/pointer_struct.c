//pointer_struct.c
/*
Pointers to structures - to avoid copying the entire structure
Arrow -> instead of a dot.
*/
#include <stdio.h>

typedef struct {
int x;
int y;
} Point;

void move_point(Point *p, int dx, int dy) {
p->x += dx; // same as (*p).x += dx
p->y += dy; // but shorter
}

int main() {
Point pos = {10, 20};

move_point(&pos, 5, -3); // passing the address

printf("x = %d, y = %d\n", pos.x, pos.y); // 15, 17

return 0;
}
