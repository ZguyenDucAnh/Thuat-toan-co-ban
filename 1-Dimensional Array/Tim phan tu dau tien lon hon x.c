#include <stdio.h>

float tim_gia_tri_lon_nhat(float arr[], int n, float x) {
    int i;
    for (i = 0; i < n; ++i) {
        if (arr[i] > x) {
            return arr[i];
        }
    }
    
    return -1;
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    float arr[n];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }
    
    float x;
    printf("Nhap gia tri x: ");
    scanf("%f", &x);

    float ket_qua = tim_gia_tri_lon_nhat(arr, n, x);
    if (ket_qua == -1) {
        printf("Khong co gia tri nao lon hon %.2f trong mang.\n", x);
    } else {
        printf("Gia tri dau tien lon hon %.2f trong mang la: %.2f\n", x, ket_qua);
    }
    
    return 0;
}

