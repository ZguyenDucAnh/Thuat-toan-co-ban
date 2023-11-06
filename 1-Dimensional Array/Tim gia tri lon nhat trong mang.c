#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max;
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
    
    int maxValue = findMax(arr, size);
    printf("The maximum value in the array is: %d\n", maxValue);

    return 0;
}

