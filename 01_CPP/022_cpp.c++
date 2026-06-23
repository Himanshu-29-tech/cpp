//================= strongly typed languase     ========================
/*
strongly typed languase is those that need's strong data types declaration and in  c++  we used it 

*/
#include <iostream>
#include <string>

using namespace std;

string api_call(){
  return "got some data from web\n";

}
int another_api_call(){
  return 5;
}
int main(){
    auto response = api_call();   // auto means automatically defined the value and give exact data type
    auto rep = another_api_call(); 

    cout << "API CALL VALUE: " << response;
    cout << "Another API call value:" << rep << endl;

    if(typeid(response)== typeid(string)){
      puts("Type of both ID matches\n");
    }

    if (typeid(rep) == typeid(int)) {
      puts("Type of both Id matches\n");
    }
  
  return 0;
}
