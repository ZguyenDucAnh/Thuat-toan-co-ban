#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 2, 1, 5, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Khởi tạo một mảng đếm
  int count[10] = {0};

  // Duyệt qua từng phần tử của mảng
  for (int i = 0; i < n; i++) {
    // Kiểm tra xem phần tử hiện tại đã xuất hiện trước đó hay chưa
    int index = arr[i] - 1;
    if (count[index] == 0) {
      // Nếu chưa xuất hiện, khởi tạo giá trị đếm là 1
      count[index] = 1;
    } else {
      // Nếu đã xuất hiện, tăng giá trị đếm lên 1
      count[index]++;
    }
  }

  // In ra các số và số lần xuất hiện của chúng
  for (int i = 0; i < 10; i++) {
    if (count[i] > 0) {
      printf("%d xuat hien  %d lan\n", i + 1, count[i]);
    }
  }

  return 0;
}
