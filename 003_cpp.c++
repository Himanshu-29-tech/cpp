//====================== Pointers =====================

/*
pointers means --->> point to the memory

*/

#include <iostream>
using namespace std;

int main() {
    int life = 4; // declaration and initalization both 
    life = 5; // we can update variable life

    /*
    if we using to put const before variable
    const int life = 4;
    life = 6; // now we can't update it 
    and this const is called 'Qualifiers' we will talking it later
    */

    int card; // again declare a new variable
    card = 40;
    
    int my_card = card; // again declare a new variable and put 1st variable in to it

    printf("Value of card is : %d\n", my_card); //value of card is : 40
    // wow 😮 output is 40


    return 0;
}