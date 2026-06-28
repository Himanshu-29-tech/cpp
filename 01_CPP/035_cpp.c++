// inheritance 

/*
Inheritance allows a class to inherit properties and methods from another class.
*/

#include <iostream>
#include <string>
using namespace std;

class Money{
public:
    void getmoney(){puts("Got 5K USD in my accounts");} 
};


class Man{
    string _name;
    int _age;
     Man(){}

protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){puts("I can run");}
public:
void sayName() const;
};

void Man::sayName() const {
    cout << "My name is : " << _name << " and age is: " << _age << endl;
}
//superman

class Superman: public Man{
    bool flight;
public:
    Superman(string name) : Man(name, 26){};
     void run(){puts("I can run at light speed");}
};

// spiderman
class Spiderman: public Man, public Money{
    bool webbing;
public:
    Spiderman(string name) : Man(name, 19){};
     void run(){puts("I can run at normal speed");}
};


int main()
{

    Superman clark("Kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    peter.getmoney();


    return 0;
}

