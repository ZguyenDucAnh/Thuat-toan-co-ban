#include <stdio.h>

int LaSoNguyenTo(int num) {
    if (num < 2) {
        return 0; 
    }
    int i;
    for (i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int TimSoNguyenToCuoiCung(int arr[], int size) {
    int soNguyenToCuoiCung = -1;

    int i;
    for (i = size - 1; i >= 0; --i) {
        if (LaSoNguyenTo(arr[i])) {
            soNguyenToCuoiCung = arr[i];
            break;
        }
    }

    return soNguyenToCuoiCung;
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

    
    int soNguyenToCuoiCung = TimSoNguyenToCuoiCung(arr, size);
    if (soNguyenToCuoiCung != -1) {
        printf("So nguyen to cuoi cung trong mang la: %d\n", soNguyenToCuoiCung);
    } else {
        printf("Mang khong co so nguyen to.\n");
    }

    return 0;
}

