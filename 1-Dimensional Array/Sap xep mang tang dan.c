#include <stdio.h>

void bubbleSort(int arr[], int size) {
	int i, j;
    for (i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Ho�n d?i gi� tr? c?a arr[j] v� arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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
    
    bubbleSort(arr, size);
    
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

