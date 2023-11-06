#include <stdio.h>

int hasCommonElements(int arr1[], int size1, int arr2[], int size2) {
	int i, j;
    for ( i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                return 1; // Có ph?n t? chung
            }
        }
    }
    return 0; // Không có ph?n t? chung
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    int arr1[size1];
    printf("Enter %d elements for the first array:\n", size1);
    int i;
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    int arr2[size2];
    printf("Enter %d elements for the second array:\n", size2);
    
    for ( i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    if (hasCommonElements(arr1, size1, arr2, size2)) {
        printf("The arrays have common elements.\n");
    } else {
        printf("The arrays do not have common elements.\n");
    }

    return 0;
}

