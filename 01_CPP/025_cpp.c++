#include <iostream>
using namespace std;

void lifeUp(int &life){
    ++life;

}

template<typename T> // we used  to declare our own variable by template 

T addme(T a, T b) {  //here we replace int to t
    return a + b;
}

int main() {
    int life = 3;
    lifeUp(life);
    cout << life << endl;

    int y1 = 4;
    int y2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout <<addme(v3 ,v4) << endl;

    return 0;
}
