//===================== Recursion =================
/*

*/

#include <iostream>
using namespace std;

int factorial(int  n);

int main() {
  int y;


  // factorial : 5 * 4 * 3 * 2 * 1 
  
  int n;

  cout << "Enter a Value: ";
  cin >> n;

  cout << "Your result for factorial is: " << factorial(n) << endl;

  return 0;
}

int factorial(int n) {

  if (n > 1) {
    return n * factorial(n -1);
  } else {
    return 1;
  }
  
  
}
