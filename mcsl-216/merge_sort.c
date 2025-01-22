#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
  int size1 = mid - low + 1;
  int size2 = high - mid;

  // create temp arrays
  int left_subarray[size1];
  int right_subarray[size2];

  for (int i = 0; i < size1; i++) {
    left_subarray[i] = arr[low + i];
  }

  for (int i = 0; i < size2; i++) {
    right_subarray[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = low;

  while (i < size1 && j < size2) {
    if (left_subarray[i] < right_subarray[j]) {
      arr[k] = left_subarray[i];
      i++;
    } else {
      arr[k] = right_subarray[j];
      j++;
    }
    k++;
  }

  while (i < size1) {
    arr[k] = left_subarray[i];
    i++;
    k++;
  }

  while (j < size2) {
    arr[k] = right_subarray[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int low, int high) {

  // base case
  if (low >= high) {
    return;
  }

  int mid = low + (high - low) / 2;
  /* int mid = (low + high) / 2; */

  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int size = 6;
  merge_sort(arr, 0, size - 1);

  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}
