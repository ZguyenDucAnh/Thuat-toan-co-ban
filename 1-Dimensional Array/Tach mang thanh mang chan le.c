#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n]; 
    int evenArr[n]; 
    int oddArr[n]; 
    int evenCount = 0; 
    int oddCount = 0; 

    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("Mang cac phan tu chan:\n");
    for ( i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Mang cac phan tu le:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}

