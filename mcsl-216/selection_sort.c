#include <stdio.h>

void selection_sort(int arr[], int size) {

  for (int i = 0; i < size; i++) {
    int smallest = arr[i];
    int smallest_index = i;

    for (int j = i + 1; j < size; j++) {
      if (smallest > arr[j]) {
        smallest = arr[j];
        smallest_index = j;
      }
    }

    // swapping
    if (smallest_index != i) {
      int temp = arr[i];
      arr[i] = smallest;
      arr[smallest_index] = temp;
    }
  }
}

int main() {
  int arr[] = {8, 4, 2, 9, 5, 7, 1, 3};

  int size = 8;
  selection_sort(arr, size);
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}
