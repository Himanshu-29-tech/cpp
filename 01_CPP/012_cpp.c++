#include <iostream>

using namespace std;

int main() {

  printf("Float size is %ld bits\n", sizeof(long) * 8);

  float my_p_value = 20.2 + 20.2;

  if (my_p_value == 40.400002) {
    puts("You got it right");
  } else {
    puts("spmething");
  }

  
  printf("My P value is: %f in float\n", my_p_value);

 return 0;
}
