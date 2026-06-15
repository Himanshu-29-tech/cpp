//================= integer =====================
/*
int
long int
long long int
unsigned int 
unsigned long int
unsigned long long int
*/

#include <iostream>
#include <cstdint> // this header file is used to puts your desire data type in program 

using namespace std;

int main(){
// 1 bytes is of 8 bits
printf("Size of this data type(char) is %ld bits\n", sizeof(int) * 8);

printf("Size of this data type(int) is %ld bits\n", sizeof(int) * 8);

printf("size of long long int data type is %ld bits\n",sizeof(long long int)* 8);

printf("Size of this data type using  cstdint headerfile is  %ld bits \n", sizeof(uint16_t)* 8);

int fun = 0b00010110;
printf("Fun value is %d\n", fun);


  return 0;
}
