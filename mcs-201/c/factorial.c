#include <stdio.h>

int find_factorial(int n) {
  int factorial = 1;

  for (int i = n; i > 0; i--) {
    factorial *= i;
  }

  return factorial;
}

int main() {
  int n;

  printf("Enter the number: \n");
  scanf("%d", &n);

  printf("Factorial: %d\n", find_factorial(n));
}
