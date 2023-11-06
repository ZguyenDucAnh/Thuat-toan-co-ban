#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  // Khai báo ma trận 3x3
  int mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  // Đảo ngược ma trận
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < i; j++) {
      swap(&mat[i][j], &mat[j][i]);
    }
  }

  // In ma trận đã đảo ngược
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
