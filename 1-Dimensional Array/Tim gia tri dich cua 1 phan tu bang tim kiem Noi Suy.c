#include <stdio.h>

int interpolationSearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high && target >= arr[low] && target <= arr[high]) {
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]);
        
        if (arr[pos] == target) {
            return pos;
        }
        
        if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    
    return -1; // Không tìm th?y giá tr?
}

int main() {
    int size, target;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    
    // G?i hàm interpolationSearch d? tìm v? trí c?a giá tr? dích
    int result = interpolationSearch(arr, size, target);
    
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", target, result);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", target);
    }
    
    return 0;
}

