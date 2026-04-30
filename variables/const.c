//const.c
/*
const define is a value that
cannot be changed, but can be used
as a variable
*/

#define VER 10
const int VER2 = 10;  //data type and = with ; needed 

int main() {
  int ver2 = VER * 2;
  printf("%d\n", ver2);
  //result:
  //20
  int ver3 = VER2 * 2;
  printf("%d", ver3);
  //result:
  //20
  //VER = 20;  //ERROR 
  //VER2 = 27; //ERROR 
  return 0;
}
