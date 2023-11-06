#include <stdio.h>


float TimDuongDauTien(float arr[], int size) {
	int i;
    
    float result = -1;


    for (i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            result = arr[i];
            break;
        }
    }

    return result;
}

int main() {
    int size;

   int i;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    float arr[size];

   
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }

 
    float duongDauTien = TimDuongDauTien(arr, size);
    if (duongDauTien > 0) {
        printf("Gia tri duong dau tien trong mang la: %.2f\n", duongDauTien);
    } else {
        printf("Mang khong co gia tri duong.\n");
    }

    return 0;
}

