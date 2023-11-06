#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array:\n");
    int i, j;
    for ( i = 0; i < size; i++) {
        int isUnique = 1;
        
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int i;
    int arr[size];
    printf("Enter %d elements:\n", size);
    
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printUniqueElements(arr, size);

    return 0;
}

