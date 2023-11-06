#include <stdio.h>

int TinhTongLe(int arr[], int size) {
	int i;
    int tongLe = 0;

    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            tongLe += arr[i];
        }
    }

    return tongLe;
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

    int tongLe = TinhTongLe(arr, size);
    printf("Tong cac phan tu le trong mang la: %d\n", tongLe);

    return 0;
}

