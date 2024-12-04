#include <stdio.h>

int main() {
  int a = 10;

  int *ptr = &a;

  printf("ptr memory address: %p\n", ptr);
  printf("value of a: %d\n", *ptr);

  int **dptr = &ptr; // double pointer
  printf("value of a using dptr: %d\n", **dptr);

  /* update value of a using dptr */
  a = **dptr + 1;

  printf("value of a now: %d\n", a);

  printf("memory address of dptr: %p\n", dptr);

  int b = 10;
  printf("%llu\n", sizeof(NULL));
}
