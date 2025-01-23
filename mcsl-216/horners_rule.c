#include <stdio.h>

int main() {
  int coefficiants[] = {6, 5, 4, -3, 2, 8, -7};
  int size = sizeof(coefficiants) / sizeof(coefficiants[0]);
  int x = 3;
  int result = coefficiants[0];
  int multiplications = 0;
  int additions = 0;

  for (int i = 1; i < size; i++) {
    result = result * x + coefficiants[i];
    multiplications++;
    additions++;
  }

  printf("%d\n", result);
  printf("%d\n", multiplications);
  printf("%d\n", additions);
}
