#include <stdio.h>

int TimSoChanDauTien(int arr[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
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

    
    int soChanDauTien = TimSoChanDauTien(arr, size);
    if (soChanDauTien != -1) {
        printf("So chan dau tien trong mang la: %d\n", soChanDauTien);
    } else {
        printf("Mang khong co so chan.\n");
    }

    return 0;
}

