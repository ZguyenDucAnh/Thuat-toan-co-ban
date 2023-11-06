#include <stdio.h>
#include <string.h>
int main() {
  char string[100];
  int i, j;

  // Nhập chuỗi
  printf("Nhap chuoi: ");
  gets(string);

  // Đảo ngược chuỗi
  for (i = 0, j = strlen(string) - 1; i < j; i++, j--) {
    char temp = string[i];
    string[i] = string[j];
    string[j] = temp;
  }

  // In ra chuỗi đảo ngược
  printf("Chuoi dao nguoc la: %s\n", string);

  return 0;
}
