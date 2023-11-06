#include <stdio.h>

void insertSorted(int arr[], int size, int newValue) {
    int i = size - 1;
    while (i >= 0 && arr[i] > newValue) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = newValue;
}

int main() {
    int size, newValue;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size + 1];  
    
    printf("Nhap cac phan tu cua mang da sap xep (sau moi phan tu la dau cach): ");
    int i;
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can chen: ");
    scanf("%d", &newValue);
    
    insertSorted(arr, size, newValue);
    
    printf("Mang sau khi chen la: ");
    for ( i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

