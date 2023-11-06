#include <stdio.h>

int ternarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        if (arr[mid1] == target) {
            return mid1;
        }
        if (arr[mid2] == target) {
            return mid2;
        }
        
        if (target < arr[mid1]) {
            return ternarySearch(arr, left, mid1 - 1, target);
        } else if (target > arr[mid2]) {
            return ternarySearch(arr, mid2 + 1, right, target);
        } else {
            return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
        }
    }
    return -1;
}

int main() {
    int size, target;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    int i;
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    int result = ternarySearch(arr, 0, size - 1, target);
    
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", target, result);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", target);
    }
    
    return 0;
}

