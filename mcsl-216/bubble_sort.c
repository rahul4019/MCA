#include <stdio.h>

void bubble_sort(int arr[], int size) {
  int swap_counter = 0;
  int comparison_counter = 0;
  int inner_loop_counter = 0;
  int outer_loop_counter = 0;

  for (int i = 0; i < size - 1; i++) {
    outer_loop_counter++;
    for (int j = 0; j < size - i - 1; j++) {
      inner_loop_counter++;
      comparison_counter++;
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swap_counter++;
      }
    }
  }
  printf("swaps count: %d\n", swap_counter);
  printf("comparison count: %d\n", comparison_counter);
  printf("outer loop count: %d\n", outer_loop_counter);
  printf("inner loop count : %d\n", inner_loop_counter);
}

int main() {
  int arr[] = {55, 25, 15, 40, 60, 35, 17, 65, 75, 10};
  int size = 10;
  bubble_sort(arr, size);
  for (int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}
