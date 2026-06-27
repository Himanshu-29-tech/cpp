//==================  object oriented programming ===========

/*
classes-



object --


inheritence --


polymorphoism --


abstraction --


*/


#include <iostream>
#include <string>
using namespace std;

class User{
  int _secret = 22; // default of class is private

public:
    string name = "default";

    void classMessage();
    void setSecret(const int & newsecret){_secret = newsecret;} // setsecret is used for private data member
    int getSecret()const {return _secret;} 


};

void User::classMessage(){
    cout << "Class is great, "<< name << endl;
}
int main()
{
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);

    cout << sam.getSecret() << endl;

    User Ram;
    Ram.classMessage();
    Ram.name = "Ram";
    Ram.classMessage();
    
    const User rock;
    cout << rock.getSecret() << endl; // const can't acess non const

    User peter = sam;

    cout << peter.getSecret() << endl;

  return 0;
}
