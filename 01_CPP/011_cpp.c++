#include <iostream>
using namespace std;

int main() {

char my_string[] = "himanshu";
char my_name []= {'h', 'i','m','a','n','s','h','u',0};
// 0 must be mentioned
printf("My name is: %s\n", my_string);
printf("My name is: %s\n", my_name);

cout << "take a break\n";

for(int i = 0; my_name[i] != 0; i++) {
  cout << "Character is: " << my_name[i] << endl;
}

// this things can also be done by without writing my_name

/*
for(int i = 0; my_string[i] != 0; i++) {
  cout << "Character is: " << my_string[i] << endl;
}

*/
cout << "take a break part 2\n";

for ( char * cp = my_name; *cp != 0; cp++) {
  cout << "Character is: " << *cp << endl;
}

cout << "break\n";

for(char i:my_name){
  
  cout << "Char is: "<< i << endl;
}// output end with blank space i.e 0




  return 0;
}
