// Move Semantics
/*

*/

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = move(a);
    a = move(b);
    b = move(tmp);

}

string printMe(){
    return "I am print";
}

int main(){

    int a = 3;
    int b = 4;
    swap(a,b);

    cout << "A : " << a << endl;

    string s = printMe();

    string&& ss = printMe();
    

    return 0;
}


