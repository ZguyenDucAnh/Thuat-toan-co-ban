#include <stdio.h>

void copyArray(int source[], int destination[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    
    int sourceArray[size];
    int destinationArray[size];
    
    printf("Enter %d elements for the source array:\n", size);
    int i;
    for ( i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }
    
    copyArray(sourceArray, destinationArray, size);
    
    printf("Copied array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}

