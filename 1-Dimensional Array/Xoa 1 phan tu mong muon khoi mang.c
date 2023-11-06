#include <stdio.h>

void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    int i;
    
    for ( i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    (*size)--;
}

int main() {
    int size, position;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    int i;
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &position);
    deleteElement(arr, &size, position);
    
    printf("Mang sau khi xoa la: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

