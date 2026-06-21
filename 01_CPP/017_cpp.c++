//======================       ===================
/*

"03_cpp/016_cpp.c++" -o main && ./main
*/

#include <iostream>
using namespace std;

int main(){

  bool isSignedIn = false;
  bool isAdmin = true;

  if(isSignedIn && isAdmin) {
    puts("welcome admin");
  } else {
    puts("No admin access!");
  }

  return 0;
}