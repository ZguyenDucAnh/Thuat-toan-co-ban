#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int size, int target) {
    int step = (int) sqrt(size);
    int prev = 0;
    
    while (arr[step - 1] < target) {
        prev = step;
        step += (int) sqrt(size);
        if (prev >= size) {
            return -1; // Không tìm th?y giá tr?
        }
    }
    
    while (arr[prev] < target) {
        prev++;
        if (prev == fmin(step, size)) {
            return -1; // Không tìm th?y giá tr?
        }
    }
    
    if (arr[prev] == target) {
        return prev;
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
    int result = jumpSearch(arr, size, target);
    
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", target, result);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", target);
    }
    
    return 0;
}

