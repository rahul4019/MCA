#include <stdio.h>

void print_fibonacci_series(int n) {

  if (n <= 0) {
    printf("Please enter a positive integer.\n");
    return;
  }

  if (n == 0) {
    printf("%d\n", 0);
    return;
  }

  if (n == 2) {
    printf("%d\n%d\n", 0, 1);
  }

  int a = 0, b = 1, c;
  printf("%d\n%d\n", a, b);

  for (int i = 3; i <= n; i++) {
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
}

int main() {
  int n;

  printf("Enter the number: \n");
  scanf("%d", &n);

  print_fibonacci_series(n);

  return 0;
}
