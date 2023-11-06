#include <stdio.h>

void printEvenOdd(int arr[], int size) {
    printf("Even numbers in the array:\n");
    int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    printf("Odd numbers in the array:\n");
    for ( i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    int i;
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printEvenOdd(arr, size);

    return 0;
}

