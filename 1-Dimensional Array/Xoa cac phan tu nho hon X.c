#include <stdio.h>

int main() {
    int n, x;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Nhap gia tri X: ");
    scanf("%d", &x);

   
    int newSize = 0; 
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        if (arr[i] >= x) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Mang sau khi xoa phan tu nho hon x %d:\n", x);
    for  (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

