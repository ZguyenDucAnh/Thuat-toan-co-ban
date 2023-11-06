#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int merged[], int size) {
    int i = 0, j = 0, k = 0;
    
    while (i < size && j < size) {
        if (arr1[i] > arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Copy remaining elements from both arrays
    while (i < size) {
        merged[k++] = arr1[i++];
    }
    while (j < size) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int size;
    
    printf("Nhap kich thuoc cua cac mang: ");
    scanf("%d", &size);
    
    int arr1[size], arr2[size], merged[2 * size];
    
    printf("Nhap cac phan tu cua mang thu nhat (sau moi phan tu la dau cach): ");
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Nhap cac phan tu cua mang thu hai (sau moi phan tu la dau cach): ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    mergeArrays(arr1, arr2, merged, size);
    
    printf("Mang sau khi hop nhat la: ");
    for ( i = 0; i < 2 * size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}

