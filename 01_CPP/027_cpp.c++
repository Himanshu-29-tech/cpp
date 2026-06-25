#include <iostream>
#define NULL 0 // for null

void printval(int a){
  printf("Integer value is %d\n", a); // printval(5)
}

void printval(double a){
  printf("Double value is %f\n",a); //printval(5.3)
}

void printval( int * a){
  printf("Pointer value is %p\n",a); //
}
int main()
 {
  printval(NULL); // null points a value 0
  return 0;
}
