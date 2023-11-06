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

    int viTriMax = 0; 
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[viTriMax]) {
            viTriMax = i; 
        }
    }

    printf("Phan tu lon nhat trong mang la %d và nam o vi tri %d.\n", arr[viTriMax], viTriMax);

    return 0;
}

