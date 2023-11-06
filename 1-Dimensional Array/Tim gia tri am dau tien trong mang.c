#include <stdio.h>
#include <float.h>
float TimGiaTriAmDauTien(float arr[], int size) {
	int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            return arr[i]; 
        }
    }
    return -1; 
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

    
    float giaTriAmDauTien = TimGiaTriAmDauTien(arr, size);
    if (giaTriAmDauTien != -1) {
        printf("Gia tri am dau tien trong mang la: %.2f\n", giaTriAmDauTien);
    } else {
        printf("Mang khong co gia tri am.\n");
    }

    return 0;
}

