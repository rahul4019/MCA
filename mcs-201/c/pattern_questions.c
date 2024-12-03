#include <stdio.h>

void star_pattern(int *ptr) {
  int n = *ptr;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c", '*');
    }
    printf("\n");
  }
}

void number_pattern(int *ptr) {
  int n = *ptr;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 1; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
}
int main() {
  int n;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  /* star_pattern(&n); */
  number_pattern(&n);
}
