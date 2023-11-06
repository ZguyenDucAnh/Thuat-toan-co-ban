#include <stdio.h>
#include <stdbool.h>

bool KiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int TimSoNguyenToLonNhat(int arr[], int n) {
    int maxNguyenTo = -1;
    int i;
    for (i = 0; i < n; i++) {
        if (KiemTraSoNguyenTo(arr[i]) && arr[i] > maxNguyenTo) {
            maxNguyenTo = arr[i];
        }
    }
    return maxNguyenTo;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxNguyenTo = TimSoNguyenToLonNhat(arr, n);
    printf("So nguyen to lon nhat la: %d\n", maxNguyenTo);
    return 0;
}
