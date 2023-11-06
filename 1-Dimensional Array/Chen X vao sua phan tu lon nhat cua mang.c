#include <stdio.h>

int main() {
    int n, X;

    
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Nhap X: ");
    scanf("%d", &X);

    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int maxIndex = 0;
    for ( i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for ( i = n; i > maxIndex; i--) {
        arr[i] = arr[i - 1];
    }

    arr[maxIndex + 1] = X;

    printf("Mang sau khi chen X:\n");
    for ( i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

