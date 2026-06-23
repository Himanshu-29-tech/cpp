//=====================   Enums   ==================== 
/*


*/
#include <iostream>
using namespace std;

enum MsOffice {
  BOLD, // BOLD = 5 ---->> you can also assign value for it 
  ITALICS,// ITALICS = 7  ---->> output is 8 (autoincrement) 
  UNDERLINE,
  COSSED
};

int main() {
  int myAttributes = BOLD; // value will be 0
  /*
  int myAttributes = ITALICS; // value will be 1
  int myAttributes = UNDERLINE; // value will be 2
  int myAttributes = COSSED; // value will be 3
 */


  cout << myAttributes << endl;


  return 0;
}
