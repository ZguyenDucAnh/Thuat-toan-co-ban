#include <stdio.h>
#include <stdlib.h>

//Ham tim gia tri tuyen tinh
int absoluteDifference(int a, int b) {
    return abs(a - b);
}

int main() {
    int n, x;
    
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap X: ");
    scanf("%d", &x);
    int i;

    printf("Nhap cac phan tu:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //Nhap nguong tuyen tinh
    int threshold;
    printf("Nhap nguong tuyen tinh: ");
    scanf("%d", &threshold);

    int newSize = 0;  
    for ( i = 0; i < n; i++) {
        if (absoluteDifference(arr[i], x) <= threshold) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("MMang sau khi xoa cac phan tu gan %d:\n", x);
    for ( i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

