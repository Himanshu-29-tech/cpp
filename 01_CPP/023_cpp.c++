//===================== stack memory and hype memory    =====================
/* both are part of RAM
stack -->>
fastest memory we gate 
deafult mempory that are used by program
pre defined size 
not only store variable space but also more than so that problem run faster

vs  🐼


Heap---->>
predefined memory but grows on our demand
not much faster than stack


*/
#include <iostream>

struct user {
  const int id;
  int age;

  user(): id(001), age(22){}
};

using namespace std;
 int main(){

  // stack
  int score = 100;
  user mike;


  //heap

  int * heap_score = new int;
  *heap_score = 200;


  user* nike = new user(); 

  delete heap_score;
  delete nike;

  
  return 0;
 }
