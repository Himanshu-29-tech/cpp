//=================== Data Types Primitive =====================

/*
type                        keyword
Boolean                     bool
Character                   char
Integer                     int
Floiating Point             float
Double floating point       double
Valueless                   void 

*/

// okay but what's will be for string 

#include <iostream>
#include <string> //  we are writing  string as a header file 
using namespace std;
int main(){

string my_color;  // string declaration
cout << "Enter your fav colour: \n";  // displaying output
getline(cin, my_color);  // getline() in C++ is a standard library function used to read an entire line of text from an input stream.
cout << "Hey " << my_color << " is my fav too" << endl;

return 0;
}


