#include <stdio.h>

void modifyValue(int *x) {
  *x = 10;
  printf("Inside the function: *x = %d\n", *x);
}

int main() {
  int num = 5;

  printf("Before function call: num = %d\n", num);

  modifyValue(&num);

  printf("After function call: num = %d\n", num);
  return 0;
}
