#include <stdio.h>

double TinhTongAm(double arr[], int size) {
    double tongAm = 0.0;
    int i;

    for (i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            tongAm += arr[i];
        }
    }

    return tongAm;
}

int main() {
    int size;

   
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    double arr[size];
    int i;


    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }


    double tongAm = TinhTongAm(arr, size);
    printf("Tong cac gia tri am trong mang la: %.2lf\n", tongAm);

    return 0;
}

