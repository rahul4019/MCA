#include <stdio.h>

void insertion_sort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      } else {
        break;
      }
    }
  }
}

int main() {
  int arr[5] = {5, 4, 3, 2, 1};
  /* int arr[5] = {5, 1, 3, 2, 4}; */

  insertion_sort(arr, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
