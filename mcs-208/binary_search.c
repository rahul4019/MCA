#include <stdio.h>

int binary_search(int arr[], int n, int key) {
  int low = 0, high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  int result = binary_search(arr, 5, 4);

  if (result != -1) {
    printf("Element found at index: %d\n", result);
  } else {
    printf("Element not found\n");
  }

  return 0;
}
