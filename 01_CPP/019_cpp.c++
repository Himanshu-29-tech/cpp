#include <iostream>
using namespace std;

int main () {

  int * myp; // pointer

  myp = new int[100]; // new means forcefully allocate the memory
  cout << "Memory space allocated\n";

  myp = new(nothrow) int[100]; 
  cout << "Memory space allocated\n";







return 0;

}
