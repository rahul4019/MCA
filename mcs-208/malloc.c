/* malloc = memory allocation */
/* we use malloc usually with structure */

/* malloc(8) => will allocate 8 bytes of memory from heap and it will return
 * base address  or address of  first byte */

/* we need pointer to store the address returned by malloc */

/* malloc returns void pointer because it does not know which type of data you
 * are storing to that memory, we need to typecast this pointer to required type
 * (ex. int) */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr;
  printf("Enter total no. of values: ");
  scanf("%d", &n);

  ptr = (int *)malloc(n * sizeof(int));

  printf("Enter values: \n");

  for (int i = 0; i < n; i++) {
    scanf("%d", (ptr + i));
  }

  printf("Entered values are: \n");
  for (int i = 0; i < n; i++) {
    printf("%d\n", *(ptr + i));
  }

  free(ptr);
}
