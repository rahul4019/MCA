#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void transpose_matrix(int matrix[MAX_ROWS][MAX_COLS],
                      int transposed_matrix[MAX_COLS][MAX_ROWS], int rows,
                      int cols) {

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      transposed_matrix[j][i] = matrix[i][j];
    }
  }
}

int main() {
  int matrix[MAX_ROWS][MAX_COLS], transposed_matrix[MAX_COLS][MAX_ROWS];
  int rows, cols;

  printf("Enter number of rows: ");
  scanf("%d", &rows);

  printf("Enter number of columns: ");
  scanf("%d", &cols);

  // fill the matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter element at position: (%d, %d)\n", (i + 1), (j + 1));
      scanf("%d", &matrix[i][j]);
    }
  }

  // print the transposed matrix
  printf("Matrix entered:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  transpose_matrix(matrix, transposed_matrix, rows, cols);

  // print the transposed matrix
  printf("Transposed matrix:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ", transposed_matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
