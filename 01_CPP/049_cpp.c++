// List

#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> mylist;

    // Insert elements
    for (int i = 3; i <= 10; ++i) {
        mylist.push_back(i);
    }

    // Print first and last element
    cout << "Front: " << mylist.front() << endl;
    cout << "Back : " << mylist.back() << endl;

    // Remove last element
    mylist.pop_back();

    // Reverse the list
    mylist.reverse();

    // Print the list
    cout << "List after pop_back() and reverse(): ";
    for (auto i : mylist) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
