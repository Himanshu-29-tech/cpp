//================ Macro ============

#include <iostream>
#include <string>

// you can write here also #define end return 0;

#define ENDMESSAGE cout << "program ends here \n"


using namespace std;

#define LCOINT int8_t // my data type -->> change at one place mnake change evrything 
#define LOCCCPC const char* const // ccpc-->> character constant pointer constant 
/*
so it;s seems like long data type so we can make it's shorter by using LOC

*/
#define console_log(a) cout << a << endl
// we can also make console_log in c++
int main()
{ 
  
  int score = 400;
  console_log(score);

  string name = "Himanshu";
  console_log(name);

  
  return 0;
}
