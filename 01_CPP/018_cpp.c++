//====================================== Bitwise Operator ================================

/*



*/

#include<iostream>
using namespace std;

int main(){


  unsigned int x = 6;
  unsigned int y = 9;

  unsigned int z = x & y; // bitwise and
  unsigned int p = x | y; // bitwise or
  unsigned int q = x ^ y; 
  unsigned int r = x != y;
  // unsigned int s = x ~ y; // !=. and ~ are same 
  unsigned int t = y >> 1;// left shift
  unsigned int u = y << 1; // right shift

  

  cout << "Value of z is: " << z << endl;






  return 0;
}
