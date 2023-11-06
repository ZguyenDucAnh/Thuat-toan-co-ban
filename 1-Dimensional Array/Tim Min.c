#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0]; 
    int i;
    for ( i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    
    return min;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minValue = findMin(arr, size);
    printf("The minimum value in the array is: %d\n", minValue);

    return 0;
}

