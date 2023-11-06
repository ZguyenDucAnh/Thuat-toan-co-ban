#include <stdio.h>

int TimViTriChanDauTien(int arr[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            return i;
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

    
    int viTriChanDauTien = TimViTriChanDauTien(arr, size);
    if (viTriChanDauTien != -1) {
        printf("Vi tri cua gia tri chan dau tien trong mang la: %d\n", viTriChanDauTien);
    } else {
        printf("Mang khong co gia tri chan.\n");
    }

    return 0;
}

