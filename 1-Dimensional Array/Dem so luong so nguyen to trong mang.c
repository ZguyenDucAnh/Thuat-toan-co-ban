#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    int i;
    for ( i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] < 100) {
            count++;
        }
    }
    return count;
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

    int primeCount = countPrimes(arr, size);
    printf("So luong so nguyen to nho hon 100 trong mang: %d\n", primeCount);

    return 0;
}

