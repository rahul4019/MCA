#include <stdio.h>

void insertion_sort(int arr[], int size) {

  for (int i = 1; i < size; i++) {

    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {8, 4, 2, 9, 5, 7, 1, 3};
  int size = 8;
  insertion_sort(arr, size);
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}
