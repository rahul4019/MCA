#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiply_matrix(int A[MAX_ROWS][MAX_COLS], int B[MAX_ROWS][MAX_COLS],
                     int C[MAX_ROWS][MAX_COLS], int rows_A, int cols_A,
                     int rows_B, int cols_B) {

  for (int i = 0; i < rows_A; i++) {
    for (int j = 0; j < cols_B; j++) {
      int sum = 0;
      for (int k = 0; k < cols_A; k++) {
        sum += A[i][k] * B[k][j];
      }
      C[i][j] = sum;
    }
  }
}

int main() {
  int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS], C[MAX_ROWS][MAX_COLS];
  int rows_A, cols_A, rows_B, cols_B;

  printf("Enter the number of rows for matrix A: ");
  scanf("%d", &rows_A);

  printf("Enter the number of columns for matrix A: ");
  scanf("%d", &cols_A);

  printf("Enter the number of rows for matrix B: ");
  scanf("%d", &rows_B);

  printf("Enter the number of columns for matrix B: ");
  scanf("%d", &cols_B);

  if (rows_A != cols_B) {
    printf("no. of matrix A must be equal to no. of columns of matrix B to "
           "multiply.");
    return 0;
  }

  // fill the matrix A
  for (int i = 0; i < rows_A; i++) {
    for (int j = 0; j < cols_A; j++) {
      printf("Enter the element at (%d, %d)\n", (i + 1), (j + 1));
      scanf("%d", &A[i][j]);
    }
  }

  // fill the matrix B
  for (int i = 0; i < rows_B; i++) {
    for (int j = 0; j < cols_B; j++) {
      printf("Enter the element at (%d, %d)\n", (i + 1), (j + 1));
      scanf("%d", &B[i][j]);
    }
  }

  multiply_matrix(A, B, C, rows_A, cols_A, rows_B, cols_B);

  // print the multiplied matrix
  for (int i = 0; i < rows_A; i++) {
    for (int j = 0; j < cols_B; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
