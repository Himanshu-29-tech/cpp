#include <iostream>

using namespace std;

int getTwo(){
  return 2;
}

void intresting(){
  puts("I am intresting");
}

int main () {
    int whatIgot = getTwo();

    void (*pointsToIntresting) ()= intresting;

    cout << whatIgot << endl;
    pointsToIntresting();
    (*pointsToIntresting)();






  return 0;
}
