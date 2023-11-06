#include <stdio.h>

int TimLeCuoiCung(int arr[], int size) {
	int i;
    int leCuoiCung = -1;

    for (i = size - 1; i >= 0; --i) {
        if (arr[i] % 2 != 0) {
            leCuoiCung = arr[i];
            break;
        }
    }

    return leCuoiCung;
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

   
    int leCuoiCung = TimLeCuoiCung(arr, size);
    if (leCuoiCung != -1) {
        printf("Gia tri le cuoi cung trong mang la: %d\n", leCuoiCung);
    } else {
        printf("Mang khong co gia tri le.\n");
    }

    return 0;
}

