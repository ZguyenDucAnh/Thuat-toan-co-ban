#include <stdio.h>

void LietKeChan(int arr[], int size) {
	int i;
    printf("Cac gia tri chan trong mang la: ");
    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
	int i;
  
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    LietKeChan(arr, size);

    return 0;
}

