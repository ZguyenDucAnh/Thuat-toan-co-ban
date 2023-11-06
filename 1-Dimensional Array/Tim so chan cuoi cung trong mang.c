#include <stdio.h>


int TimSoChanCuoiCung(int arr[], int size) {
    int soChanCuoiCung = -1; 

    int i;
    for (i = size - 1; i >= 0; --i) {
        if (arr[i] % 2 == 0) {
            soChanCuoiCung = arr[i];
            break;
        }
    }

    return soChanCuoiCung;
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

  
    int soChanCuoiCung = TimSoChanCuoiCung(arr, size);
    if (soChanCuoiCung != -1) {
        printf("So chan cuoi cung trong mang la: %d\n", soChanCuoiCung);
    } else {
        printf("Mang khong co so chan.\n");
    }

    return 0;
}

