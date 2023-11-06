#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int tongCucDai = 0;

    for ( i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            tongCucDai += arr[i];
        }
    }

    if (arr[0] >= arr[1]) {
        tongCucDai += arr[0];
    }
    if (arr[n - 1] >= arr[n - 2]) {
        tongCucDai += arr[n - 1];
    }

    printf("Tong cac phan tu cuc dai trng mang la: %d\n", tongCucDai);

    return 0;
}

