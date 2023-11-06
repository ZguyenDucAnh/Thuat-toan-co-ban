#include <stdio.h>

int main() {
  int j;
  printf("Nhap so luong phan tu: ");
  scanf("%d", &j);

  int arr[j];
  int i;
  for ( i = 0; i < j; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  for ( i = 1; i < j; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  int n = 0;
  for (i = 0; i < j; i++) {
    if (arr[i] != max) {
      arr[n++] = arr[i];
    }
  }

  
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

