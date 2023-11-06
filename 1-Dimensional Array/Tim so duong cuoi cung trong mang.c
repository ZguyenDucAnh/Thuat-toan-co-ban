#include <stdio.h>
#include <float.h>

float TimSoDuongCuoiCung(float arr[], int size) {
    float soDuongCuoiCung = -1; 
	int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            soDuongCuoiCung = arr[i];
        }
    }

    return soDuongCuoiCung; 
}

int main() {
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    float arr[size];
	int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }

    float soDuongCuoiCung = TimSoDuongCuoiCung(arr, size);
    if (soDuongCuoiCung != -1) {
        printf("So duong cuoi cung trong mang la: %.2f\n", soDuongCuoiCung);
    } else {
        printf("Mang khong co gia tri duong.\n");
    }

    return 0;
}

