#include <stdio.h>

int isSymmetric(int arr[], int size) {
	int i;
    for (i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return 0; // Không d?i x?ng
        }
    }
    return 1; // Ð?i x?ng
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang (n < 20): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 20) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
   int i;
    int arr[20];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    if (isSymmetric(arr, n)) {
        printf("Mang la mang xung (doi xung).\n");
    } else {
        printf("Mang khong xung (khong doi xung).\n");
    }

    return 0;
}

