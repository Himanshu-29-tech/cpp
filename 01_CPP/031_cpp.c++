// Variadic templates and recursion

/*
variadic means three dot(...)

*/

#include <iostream>
#include <string>

using namespace std;
template <typename T>
void func(T t){
  cout << "One func " << t << endl;
}

template<typename T, typename... Args>
void func(T t, Args... args) {
  cout << "Two Func " << t << endl;
  func(args...); /* so here we use recursion in backend when 1 is T rest variables in args list 
  when 2 is T rest variable in args list
  */
}



int main()
{


  string myName = "Himanshu";

  func(myName);
  func(1);

  func(1, 2, 3.4, 4.5, myName);





  return 0;
}
