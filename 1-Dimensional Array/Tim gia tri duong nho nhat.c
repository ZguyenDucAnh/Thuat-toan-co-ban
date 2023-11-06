#include <stdio.h>
#include <float.h>
float TimGiaTriDuongNhoNhat(float arr[], int size) {
    float duongNhoNhat = FLT_MAX; 
    int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] < duongNhoNhat) {
            duongNhoNhat = arr[i];
        }
    }

    if (duongNhoNhat == FLT_MAX) {
        return -1;
    } else {
        return duongNhoNhat; 
    }
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
    float giaTriDuongNhoNhat = TimGiaTriDuongNhoNhat(arr, size);
    if (giaTriDuongNhoNhat != -1) {
        printf("Gia tri duong nho nhat trong mang la: %.2f\n", giaTriDuongNhoNhat);
    } else {
        printf("Mang khong co gia tri duong.\n");
    }

    return 0;
}

