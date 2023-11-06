#include <stdio.h>

int KiemTraHoanThien(int n) {
    int sum = 0;
    int i;
    for ( i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int TimViTriHoanThienCuoiCung(int arr[], int size) {
    int viTriCuoiCung = -1;

    int i;
    for ( i = 0; i < size; ++i) {
        if (KiemTraHoanThien(arr[i])) {
            viTriCuoiCung = i;
        }
    }

    return viTriCuoiCung;
}

int main() {
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
    int i;

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int viTriHoanThienCuoiCung = TimViTriHoanThienCuoiCung(arr, size);
    if (viTriHoanThienCuoiCung != -1) {
        printf("Vi tri cua so hoan thien cuoi cung trong mang la: %d\n", viTriHoanThienCuoiCung);
    } else {
        printf("Mang khong co so hoan thien.\n");
    }

    return 0;
}

