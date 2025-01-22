#include <stdio.h>

void merge(int arr1[], int size1, int arr2[], int size2, int result[]) {
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      result[k] = arr1[i];
      i++;
    } else {
      result[k] = arr2[j];
      j++;
    }
    k++;
  }

  while (i < size1) {
    result[k] = arr1[i];
    i++;
    k++;
  }

  while (j < size2) {
    result[k] = arr2[j];
    j++;
    k++;
  }
}

int main() {
  int arr1[] = {-15, -10, -3, 0, 2, 9, 15, 23, 42};
  int arr2[] = {-20, -19, -3, 1, 8, 12, 29, 35, 50, 100};

  int size = 19;
  int result[size];

  merge(arr1, 9, arr2, 10, result);

  for (int i = 0; i < size; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");
}
