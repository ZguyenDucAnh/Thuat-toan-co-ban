#include <stdio.h>

int main() {
  int j;
  printf("Nap so luong phan tu cua mang: ");
  scanf("%d", &j);

  int arr[j];
  int i;
  for ( i = 0; i < j; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int n = 0;
  for ( i = 0; i < j; i++) {
    if (i % 2 == 0) {
      arr[n++] = arr[i];
    }
  }
  for ( i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

