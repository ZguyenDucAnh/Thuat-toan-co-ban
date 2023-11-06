#include <stdio.h>
int KiemTraHoanThien(int n) {
    int sum = 0;
    int i;
    for (i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int TimSoHoanThienDauTien(int arr[], int size) {
	int i;
    for (i = 0; i < size; ++i) {
        if (KiemTraHoanThien(arr[i])) {
            return arr[i];
        }
    }

    return -1; 
}

int main() {
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int soHoanThienDauTien = TimSoHoanThienDauTien(arr, size);
    if (soHoanThienDauTien != -1) {
        printf("So hoan thien dau tien trong mang la: %d\n", soHoanThienDauTien);
    } else {
        printf("Mang khong co so hoan thien.\n");
    }

    return 0;
}

