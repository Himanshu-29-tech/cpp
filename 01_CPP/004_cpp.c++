#include <iostream>
using namespace std;

int main() {
  int score = 200;
  int *myp = &score; // storing address

  printf("Value of score is %d\n", score); // we are using simple variable so we use %d here
  printf("Value of pointer is %p\n",myp); // we are printing pointer value here so we are using % p

  int &another_score = score; // it's use as  a reference --->> reference tolds that what's the value is referensing

  another_score = 800; // we trying to  changing the value 
  
  printf("Value of score is %d\n", score); 
  printf("Value of pointer is %p\n",myp); // now value is change 👊

  /*
  any change in referense change the actual value 
  */


return 0;

}
