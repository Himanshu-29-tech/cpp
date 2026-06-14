/*
#include <iostream>
using namespace std; // we used std here in header file

int main() {
cout << "Hello Ram" << endl ;
return 0;
}
*/
//============ input ==========

#include <iostream>
using namespace std; // library header function 

int main() {   // function strart from here 

int numbers;  // declaration of variable 
              // synatx ---->>  variable type variable;
cin >> numbers;  // take input using syntax 
                // syntax ---->> cin >> input variable name
printf("Dear customer welcome to our platform your confirmation id is %d", numbers);
// print the result 
return 0;
}
//================== identifiers =======================

/*
so cpp is case sensitive 
for identifiers there is some rules


1>> uppercase and lowercase letters: timTimmy, timtimmy
2>> never starts with number you can use number in between or end
3>> we can use underscore::  tim_timmy
4>> we can't start wth reserve keyword
5>> underscore as start means private and it's also a keyword so avoid it in starting
*/