// ================== Function ==============
/*

*/
#include <iostream>

using namespace std;

void sayHello(){ // void used when we doesn't need to return value 
puts("Hello there!"); // by the force we are print statement
}

void sayTwo(){
  puts("2");
}

int sayThree(){ // so we using int here we need to return value
  return 3;
}

void sayFour(){
  puts("4");
}
int main(){

  sayHello();
  sayTwo();
  printf("%d\n", sayThree());
  sayFour();


  return 0;
}

