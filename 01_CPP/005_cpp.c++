//================== Arrays =====================
/*
Arrays-->>
array is continious memory allocation that store multiple value of same data type.

syntax --->>>
data_type array_name[array_size] = {array_element}
*/
#include <iostream>
using namespace std;

int main() {

    int integer_array[4] = {1, 2, 3, 4};
    cout << integer_array[0] << endl; // output is 1
    cout << integer_array << endl; // output is memory address

    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 19;

    cout << another_array[0] << endl; // value of array will be 9
    cout << another_array[1] << endl; // value of array will be 0


    *another_array = 29;  // we can change the 1st position value
    cout << another_array[0] << endl; // output is 29


    cout << another_array[1] << endl;
    int *ap = another_array; // output is 19
    ap++;// move to 2nd position 

    *ap = 209;
    cout << another_array[1] << endl; // output is 209



  return 0;
}
