#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float tim_gia_tri_xa_nhat(float arr[], int n, float x) {
    
    float gia_tri_xa_nhat = arr[0];
    float khoang_cach_xa_nhat = fabs(arr[0] - x);
    
    int i;
    for (i = 1; i < n; ++i) {
        float khoang_cach = fabs(arr[i] - x);
        if (khoang_cach > khoang_cach_xa_nhat) {
            khoang_cach_xa_nhat = khoang_cach;
            gia_tri_xa_nhat = arr[i];
        }
    }
    
    return gia_tri_xa_nhat;
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
    
    
    float gia_tri_xa_nhat = tim_gia_tri_xa_nhat(arr, n, x);
    printf("Gia tri trong mang xa gia tri %.2f nhat la: %.2f\n", x, gia_tri_xa_nhat);
    
    return 0;
}

