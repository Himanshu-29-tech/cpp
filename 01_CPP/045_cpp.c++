// sorting
/*

*/

#include <iostream>
using namespace std;


int main(){

    int numbers[6] = {3,2,6,4,7,9};

    cout << "Unsorted values: "<< endl;
    for(int n : numbers){
        cout << n << " ";
    }

    sort(numbers, numbers+6);

   if (binary_search(numbers, numbers+6,7)) {
    cout << "Numbers FOUND" << endl;

    } else {
        cout << "Number not found" << endl;
    }
    

    cout << "sorted values: "<< endl;
    for(int n : numbers){
        cout << n << " ";
    }

    return 0;
}
