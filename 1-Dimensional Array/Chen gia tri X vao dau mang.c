#include <stdio.h>

int main() {
    int n, X;

    printf("Nhap so luong phan tu :");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Nhap X: ");
    scanf("%d", &X);
    int i;

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

     
    for (i = n; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[0] = X;

   
    printf("Mang sau khi chen X:\n");
    for ( i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

