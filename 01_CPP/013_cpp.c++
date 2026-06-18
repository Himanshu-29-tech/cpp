#include <iostream>

using namespace std;

int main() {

    // Part 1: Integer Exception
    int call_api = 2;

    try {
        cout << "Trying to use API value\n";
        cout << "Did some testing with API value\n";

        throw call_api;
    }
    catch (int x) {
        cout << "Integer exception handled\n";
        cout << "Value received: " << x << endl;
    }

    cout << "Keep on moving with rest of code\n";

    cout << "----------------------\n";

    // Part 2: Float Exception
    float call_api_float = 2.0f;

    try {
        cout << "Trying to use API value\n";
        cout << "Did some testing with API value\n";

        throw call_api_float;

        cout << "This line will never execute\n";
    }
    catch (int x) {
        cout << "Integer exception handled\n";
    }
    catch (float f) {
        cout << "Float exception handled\n";
        cout << "Value received: " << f << endl;
    }

    cout << "Keep on moving with rest of code\n";

    cout << "----------------------\n";

    // Part 3: Character Exception
    char call_api_char = 'h';

    try {
        cout << "Trying to use API value\n";
        cout << "Did some testing with API value\n";

        throw call_api_char;

        cout << "This line will never execute\n";
    }
    catch (...) {
        cout << "Something went wrong\n";
    }

    cout << "Keep on moving with rest of code\n";

    return 0;
}
