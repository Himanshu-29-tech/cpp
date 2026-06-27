// Rule of three----->> https://share.google/x95oVpUDzIxxFve2J

#include <iostream>
#include <string>
using namespace std;

class phone{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    phone(); // default constructor
    phone(const string & name, const string & os, const int & price); // parameter constructor
    phone(const phone & ); // copy constructor
    
    string getname(){
    printf("Value of getPrice is %p\n", this);
     return _os; 
    
  }
    int getPrice();
    ~phone(); //destructor
};

int phone::getPrice(){
  printf("Value of object is %p\n", this);
  return _price;

}

phone::phone() : _name(), _os("Andy"), _price(){
    puts("Deafault constructor");
}

phone::phone(const string & name, const string & os, const int & price)
    : _name(name), _os(os), _price(price){
    puts("this is parameter constructor");
}

phone::phone(const phone & values) {
    puts("OVERWRITE copy constructor");
    _name = values._name;
    _os = "skinned-" + values._os;   // corrected
    _price = values._price;
}

int main()
{
    phone samsungA1;
    cout << samsungA1.getname() << endl;

    phone OnePlus8("OP8", "Android", 799);
    cout << OnePlus8.getname() << endl;

    printf("Value of getPrice is %p\n", &OnePlus8);



    phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getname() << endl;  // corrected

    return 0;
}
