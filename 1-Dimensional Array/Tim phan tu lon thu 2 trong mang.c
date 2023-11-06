#include <stdio.h>

void Max2nd(int arr[], int size) {
    int largest = arr[0];
    int Max2nd = arr[1];
    
    // Tìm ph?n t? l?n nh?t và ph?n t? l?n th? hai
    if (Max2nd > largest) {
        largest = arr[1];
        Max2nd = arr[0];
    }
    int i;
    for (i = 2; i < size; i++) {
        if (arr[i] > largest) {
            Max2nd = largest;
            largest = arr[i];
        } else if (arr[i] > Max2nd && arr[i] != largest) {
            Max2nd = arr[i];
        }
    }
    
    if (Max2nd != largest) {
        printf("Phan tu lon thu hai la: %d\n", Max2nd);
    } else {
        printf("Khong co phan tu lon thu hai.\n");
    }
}

int main() {
    int size;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    int i;
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    Max2nd(arr, size);
    
    return 0;
}

