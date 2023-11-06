#include <stdio.h>

int TinhTongChan(int arr[], int size) {
	int i;
    int tongChan = 0;

    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            tongChan += arr[i];
        }
    }

    return tongChan;
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

    
    int tongChan = TinhTongChan(arr, size);
    printf("Tong cac phan tu chan trong mang la: %d\n", tongChan);

    return 0;
}

