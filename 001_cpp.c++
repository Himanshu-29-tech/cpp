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