//==================== Conditions =============================

/*
if condition become true true block will be executed
and if condition is going to false then false block will be executed



*/
#include <iostream>
using namespace std;

int main(){

  int rating  = 5;

  if(rating == 5){ // here using = operators means assign operator and using == indicates is things is equal or not
    puts("5 star rated");
  }
  else if(rating== 4) {
    puts("4 star rated");
  }

  else {
      puts("Not 5 Sstar rated");
    }
if(1) { // it's read 1 as a true and 0 as a false
      puts("Go for it");
    }
  //================= Terniary operator =======================
  /*syntax💁
  condition ? true : false
  */
  printf("Your rating feedback is %s\n",rating > 4 ? "true block" : "false block");
 
  return 0;
}
  return 0;
}
