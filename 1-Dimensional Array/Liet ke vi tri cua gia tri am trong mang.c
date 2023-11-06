#include <stdio.h>


void LietKeViTriAm(double arr[], int size) {
	int i;
    printf("Cac vi tri co gia tri am trong mang la: ");
    for (i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    double arr[size];
	int i;
    
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }

    LietKeViTriAm(arr, size);

    return 0;
}

