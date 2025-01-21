#include <stdio.h>

int binary_search(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + ((right - left)) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int index = binary_search(arr, 5, 5);
  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element is at index %d\n", index);
  }
}
