#include <stdio.h>

void modify_value(int x) {
  x = 10;
  printf("inside the modify_value function: x = %d\n", x);
}

int main() {
  int num = 5;

  printf("Before function call: num = %d\n", num);

  modify_value(num);

  printf("After function call: num = %d\n", num);

  return 0;
}
