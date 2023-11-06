#include <stdio.h>

float TimGiaTriAmLonNhat(float arr[], int n) {
    float maxAm = -1;
    int i;
    for ( i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] > maxAm) {
            maxAm = arr[i];
        }
    }
    return maxAm;
}

int main() {
    int n;
    printf("Nap so phan tu cua mang: ");
    scanf("%d", &n);
    float arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    float maxAm = TimGiaTriAmLonNhat(arr, n);
    printf("Gia tri am lon nhat cua mang la: %.2f\n", maxAm);
    return 0;
}
