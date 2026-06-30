// smart pointer

/*
https://learn.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170

Unique Pointers --->>
Memory get free as scope ends
you can't copy them



*/
#include <iostream>
#include <string>
#include <memory>
using namespace std;


class user{
public:
    user(){
        cout << "User created\n";
    }
    ~user(){
        cout << "User destroyed\n";
    }

    void testFunc(){
        cout << "I am a test function\n";
    }
};

int main()
{ 
    {
        // unique_ptr<user> sam(new user()); // non fav.way of developers

        unique_ptr<user> sam = make_unique<user>();
        sam->testFunc();

       // unique_ptr<user> samm = sam;Not Allowed

    }
    {  
        shared_ptr<user> tim(new user());
       // shared_ptr<user> tim = make_shared <user>();
        weak_ptr<user> wtim = tim;
        shared_ptr<user> trim = tim;
    }

cout << "Outside code\n";

return 0;

}


