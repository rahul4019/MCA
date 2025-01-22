#include <stdio.h>

int main() {
  int coefficiants[] = {6, 5, 4, -3, 2, 8, -7};
  int size = sizeof(coefficiants) / sizeof(coefficiants[0]);
  int x = 3;
  int result = 0;
  int multiplications = 0;

  for (int i = 0; i < size; i++) {
    int val_with_power = 1;
    for (int j = 0; j < size - 1 - i; j++) {
      multiplications++;
      val_with_power *= x;
    }
    result += coefficiants[i] * val_with_power;
  }
  printf("%d\n", result);
  printf("%d\n", multiplications);
}
