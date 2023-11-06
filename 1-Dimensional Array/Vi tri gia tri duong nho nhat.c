#include <stdio.h>
#include <float.h>

int TimViTriGiaTriDuongNhoNhat(float arr[], int size) {
    float duongNhoNhat = FLT_MAX;
    int viTri = -1; 
    int i;
    for ( i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] < duongNhoNhat) {
            duongNhoNhat = arr[i];
            viTri = i;
        }
    }

    return viTri; 
}

int main() {
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    float arr[size];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }
    int viTriGiaTriDuongNhoNhat = TimViTriGiaTriDuongNhoNhat(arr, size);
    if (viTriGiaTriDuongNhoNhat != -1) {
        printf("Vi tri cua gia tri duong nho nhat trong mang la: %d\n", viTriGiaTriDuongNhoNhat);
    } else {
        printf("Mang khong co gia tri duong.\n");
    }

    return 0;
}

