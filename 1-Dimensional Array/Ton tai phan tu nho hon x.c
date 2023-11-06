#include <stdio.h>
int TonTaiChanNhoHonX(int arr[], int size, int x) {
	int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0 && arr[i] < x) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int size, x;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);


    if (TonTaiChanNhoHonX(arr, size, x)) {
        printf("Trong mang co gia tri chan nho hon %d.\n", x);
    } else {
        printf("Trong mang khong co gia tri chan nho hon %d.\n", x);
    }

    return 0;
}

