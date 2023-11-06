#include <stdio.h>

void countFrequency(int arr[], int size) {
    int visited[size];
    int i, j;
    for (i = 0; i < size; i++) {
        visited[i] = -1; // Kh?i t?o m?ng visited v?i giá tr? -1
    }
    
    for (i = 0; i < size; i++) {
        int count = 1;
        
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0; // Ðánh d?u ph?n t? dã du?c d?m
            }
        }
        
        if (visited[i] != 0) {
            visited[i] = count;
        }
    }
    
    printf("Frequency of each element:\n");
    for ( i = 0; i < size; i++) {
        if (visited[i] != 0) {
            printf("%d occurs %d times\n", arr[i], visited[i]);
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
    
    countFrequency(arr, size);

    return 0;
}

