#include <stdio.h>

void bubble_sort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {

    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[5] = {1, 4, 5, 3, 2};

  bubble_sort(arr, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
