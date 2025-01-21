#include <stdio.h>

int linear_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {5, 2, 99, 1, 4};
  int index = linear_search(arr, 5, 200);
  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element is at index %d\n", index);
  }
}
