#include <stdio.h>

void removeElement(int arr[], int *n, int X) {
    int newSize = 0;
    int i;
    for ( i = 0; i < *n; i++) {
        if (arr[i] != X) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *n = newSize;
}

int main() {
    int n, X;

    printf("Nhap so luong phan tu cua mang : ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap X: ");
    scanf("%d", &X);

    removeElement(arr, &n, X);

    printf("Mang sau khi xoa cac phan tu trung voi  %d:\n", X);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

