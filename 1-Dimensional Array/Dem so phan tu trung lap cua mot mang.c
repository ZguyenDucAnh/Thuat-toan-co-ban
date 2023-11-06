#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;
    int i, j;
    for ( i = 0; i < size; i++) {
        for ( j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    
    return count;
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
    
    int duplicates = countDuplicates(arr, size);
    printf("Total duplicate elements in the array: %d\n", duplicates);

    return 0;
}

