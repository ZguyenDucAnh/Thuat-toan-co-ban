#include <stdio.h>

int LaSoHoanThien(int num) {
    int sum = 0;
    int i;
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return num == sum;
}

int TimSoHoanThienNhoNhat(int arr[], int size) {
    int soHoanThienNhoNhat = -1; 

    int i;
    for (i = 0; i < size; ++i) {
        if (LaSoHoanThien(arr[i])) {
            if (soHoanThienNhoNhat == -1 || arr[i] < soHoanThienNhoNhat) {
                soHoanThienNhoNhat = arr[i];
            }
        }
    }

    return soHoanThienNhoNhat; 
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

    int soHoanThienNhoNhat = TimSoHoanThienNhoNhat(arr, size);
    if (soHoanThienNhoNhat != -1) {
        printf("So hoan thien nho nhat trong mang la: %d\n", soHoanThienNhoNhat);
    } else {
        printf("Mang khong co so hoan thien.\n");
    }

    return 0;
}

