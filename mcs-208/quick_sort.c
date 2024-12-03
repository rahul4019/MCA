#include <stdio.h>

int partition(int arr[], int low, int high) {
  int pivot = arr[low];

  int i = low;
  int j = high;

  while (i < j) {
    while (arr[i] <= pivot && i <= high - 1) {
      i++;
    }
    while (arr[j] > pivot && j >= low + 1) {
      j--;
    }
    if (i < j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[low];
  arr[low] = arr[j];
  arr[j] = temp;

  return j;
}

void quick_sort(int arr[], int low, int high) {
  // only sort if array's size more than 1
  if (low < high) {
    int partition_index = partition(arr, low, high);
    quick_sort(arr, low, partition_index - 1);  // sort left side of  the array
    quick_sort(arr, partition_index + 1, high); // sort right side of  the array
  }
}

int main() {
  int arr[] = {4, 1, 5, 7, 2, 9, 4, 2};

  quick_sort(arr, 0, 7);

  for (int i = 0; i < 8; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
