#include <stdio.h>

void longestIncreasingSubsequence(int arr[], int size) {
    int lis[size];
    int max_length = 1;
    int i, j;
    for (i = 0; i < size; i++) {
        lis[i] = 1;
    }
    for ( i = 1; i < size; i++) {
        for ( j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
                if (lis[i] > max_length) {
                    max_length = lis[i];
                }
            }
        }
    }
    
    // In ra dãy con tang d?n dài nh?t
    printf("Longest increasing subsequence length: %d\n", max_length);
    printf("Longest increasing subsequence: ");
    int lastIndex = -1;
    for (i = size - 1; i >= 0; i--) {
        if (lis[i] == max_length && (lastIndex == -1 || arr[i] < arr[lastIndex])) {
            printf("%d ", arr[i]);
            max_length--;
            lastIndex = i;
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
    
    longestIncreasingSubsequence(arr, size);

    return 0;
}

