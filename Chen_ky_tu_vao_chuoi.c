#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Hello, world!";
  int n = 5;
  char c = '!';

  // Di chuyển các ký tự của chuỗi sang một vị trí mới, bắt đầu từ vị trí n.
  memmove(str + n + 1, str + n, strlen(str) - n);

  // Chèn ký tự mới vào vị trí n.
  str[n] = c;

  // In ra chuỗi mới.
  printf("%s\n", str);

  return 0;
}
