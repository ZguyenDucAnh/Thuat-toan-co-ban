#include <stdio.h>

void bubbleSort(int arr[], int size) {
	int i, j;
    for ( i = 0; i < size - 1; i++) {
        for ( j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán d?i giá tr? c?a arr[j] và arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findKthLargest(int arr[], int size, int k) {
    bubbleSort(arr, size);
    return arr[size - k];
}

int main() {
    int size, k;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    int i;
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    int kthLargest = findKthLargest(arr, size, k);
    printf("The %dth largest element is: %d\n", k, kthLargest);

    return 0;
}

