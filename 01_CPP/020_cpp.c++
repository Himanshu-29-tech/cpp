//=============== struct =========================
/* syntax💁

struct struct_name {
data_type variable_name;
data_type variable_name;
};



*/


#include<iostream>
using namespace std;

struct user{
  const int uId;
  const char *name;
  const char *email; //const is for pointer not for value so we can change the value
  int course_count;
};

int main(){

  user mickey = {001, "mickey" , "mickey@cartoon.com", 2};
  user donald = {002, "donald" , "donald@cartoon.com", 3};

  user * d = &donald; // reference 
  // struct_name * ref_symbol = &var_name


  cout << donald.email << endl;
  donald.course_count = 4;
  // donald.uId = 221;  ----->> we can't change the const 


  donald.email = "ddnoaldy@toon .com";

  cout << donald.email << endl;

 d->course_count= 12;
 
 cout << donald.course_count << endl;

 









  return 0;
}
