#include <stdio.h>

void insertValue(int arr[], int *size, int newValue) {

    (*size)++;

    arr[*size - 1] = newValue;
}

int main() {
    int size, newValue;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size + 1]; 
    int i;
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can chen: ");
    scanf("%d", &newValue);

    insertValue(arr, &size, newValue);
    
    printf("Mang sau khi chen la: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

