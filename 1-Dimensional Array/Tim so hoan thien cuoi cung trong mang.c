#include <stdio.h>

int LaSoHoanThien(int num) {
	int i;
    int sum = 0;
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return num == sum;
}

int TimSoHoanThienCuoiCung(int arr[], int size) {
    int soHoanThienCuoiCung = -1; 
    int i;
    for (i = size - 1; i >= 0; --i) {
        if (LaSoHoanThien(arr[i])) {
            soHoanThienCuoiCung = arr[i];
            break;
        }
    }

    return soHoanThienCuoiCung; 
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

    int soHoanThienCuoiCung = TimSoHoanThienCuoiCung(arr, size);
    if (soHoanThienCuoiCung != -1) {
        printf("So hoan thien cuoi cung trong mang la: %d\n", soHoanThienCuoiCung);
    } else {
        printf("Mang khong co so hoan thien.\n");
    }

    return 0;
}

