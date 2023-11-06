#include <stdio.h>

void findSecondSmallest(int arr[], int size) {
    int smallest = arr[0];
    int Min2nd = arr[1];
    
    // Tìm ph?n t? nh? nh?t và ph?n t? nh? th? hai
    if (Min2nd < smallest) {
        smallest = arr[1];
        Min2nd = arr[0];
    }
    int i;
    for ( i = 2; i < size; i++) {
        if (arr[i] < smallest) {
            Min2nd = smallest;
            smallest = arr[i];
        } else if (arr[i] < Min2nd && arr[i] != smallest) {
            Min2nd = arr[i];
        }
    }
    
    if (Min2nd != smallest) {
        printf("Phan tu nho thu hai la: %d\n", Min2nd);
    } else {
        printf("Khong co phan tu nho thu hai.\n");
    }
}

int main() {
    int size;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    int i;
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    findSecondSmallest(arr, size);
    
    return 0;
}

