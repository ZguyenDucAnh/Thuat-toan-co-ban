#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int firstPrime(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            return arr[i];
        }
    }
    return -1; // Không tìm th?y s? nguyên t?
}

int main() {
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for ( i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int result = firstPrime(arr, size);
    if (result != -1) {
        printf("So nguyen to dau tien trong mang la: %d\n", result);
    } else {
        printf("Mang khong co so nguyen to.\n");
    }

    return 0;
}

