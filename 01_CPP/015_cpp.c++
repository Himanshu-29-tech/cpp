//======================== Qualifiers =====================
/*

previously we had gave a hint for qualifiers 
const int = 5; ----->>> we can't change the value of int so const is like a qualifiers
put("int") 


🗒️ two types of qualifiers ------>>>
1>> modification qualifiers--->> allow to modify value that's we put in variable
ex.🚔  const,volatile,mutable

2>> life duration qualifers ------>> gets a idea abouth how much duration a value can be stored in variable
ex.🚔  static register extern
*/

#include <iostream>
using namespace std;

int lifeUp(){
  static int life = 3; // if we are not going to put static heere then output will be :

/*
Your starting game life is: 3
Yournupdated game life is 4
Your updated game life is 4
*/
  //return life++; // postfix --->> first fix the variable then update
  return ++life; //prefix --->> first update then fix
}

int main() {
  int life = 3;
  cout << "Your starting game life is: " << life << endl;

  life = lifeUp();
  printf("Your updated game life is %d\n", life);

  life = lifeUp();
  printf("Your updated game life is %d\n", life);




  return 0;
}







