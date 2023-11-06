#include <stdio.h>

void insertionSort(int arr[], int size) {
	int i;
    for ( i = 1; i < size; i++) {
        int currentElement = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > currentElement) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = currentElement;
    }
}

int main() {
    int size;
    
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Nhap cac phan tu cua mang (sau moi phan tu la dau cach): ");
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, size);
    
    printf("Danh sach sau khi sap xep la: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

