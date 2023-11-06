#include <stdio.h>

int findMostFrequentElement(int arr[], int n) {
    int maxCount = 0;
    int mostFrequentElement = arr[0]; 
    int count;
    int i, j;

    for ( i = 0; i < n; i++) {
        count = 1; 

        for ( j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequentElement = arr[i];
        }
    }

    return mostFrequentElement;
}

int main() {
    int n;
    int i;

    printf("Nhap so luong phan tu cua mang :");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int mostFrequentElement = findMostFrequentElement(arr, n);

    printf("Phan tu xuat hien nhieu nhat la %d.\n", mostFrequentElement);

    return 0;
}

