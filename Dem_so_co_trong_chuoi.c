#include <stdio.h>

int main() {
  char str[100];
  int count = 0;

  // Nhập chuỗi
  printf("Nhap chuoi: ");
  gets(str);

  // Duyệt qua từng ký tự trong chuỗi
  for (int i = 0; str[i] != '\0'; i++) {
    // Kiểm tra xem ký tự đó có phải là số không
    if (str[i] >= '0' && str[i] <= '9') {
      // Nếu là số thì tăng biến đếm lên 1
      count++;
    }
  }

  // In ra số lượng số trong chuỗi
  printf("So luong so co trong chuoi: %d\n", count);

  return 0;
}
