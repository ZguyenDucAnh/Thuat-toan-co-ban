#include <stdio.h>


int TimViTriMin(int arr[], int size) {
	int i;
    int min = arr[0];
    int viTriMin = 0;

    for ( i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            viTriMin = i;
        }
    }

    return viTriMin;
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

  
    int viTriMin = TimViTriMin(arr, size);
    printf("Vi tri cua gia tri nho nhat trong mang la: %d\n", viTriMin);

    return 0;
}

