#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    queue<int> myq;

    myq.push(10);
    myq.push(11);
    myq.push(12);
    myq.push(13);
    myq.push(14);
    myq.push(15);

    cout << myq.front() << endl;
    cout << myq.back() << endl;
    myq.pop();
    cout <<myq.front() << endl;


    while (!myq.empty()) {
        cout << " " << myq.front();
        myq.pop();
    }

    cout << "\n";

    cout << "Outside" << endl;
    cout << myq.front() <<endl;

    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(40);
    mypq.push(50);
    mypq.push(5);




    return 0;
}
