//basic_struct.c
/*
A structure is a data type that combines several variables.
Like an array, but with different types.
*/

struct player { //struct name
char name[32]; //init
int health; //init
int armor; //init
float speed; //init
}; //;

int main(void) {
struct player hero = {"Elox", 100, 50, 5.5};
//values
// Access via dot
// hero.health = 80;
hero.health = 76;
//You can easily change an struct element
return 0;
}
