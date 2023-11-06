#include <stdio.h>

int TimSoChanNhoNhat(int arr[], int size) {
    int soChanNhoNhat = -1; 
    int i;


    for ( i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) { 
            if (soChanNhoNhat == -1 || arr[i] < soChanNhoNhat) {
                soChanNhoNhat = arr[i];
            }
        }
    }

    return soChanNhoNhat; 
}

int main() {
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int arr[size];
	int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int soChanNhoNhat = TimSoChanNhoNhat(arr, size);
    if (soChanNhoNhat != -1) {
        printf("So chan nho nhat trong mang la: %d\n", soChanNhoNhat);
    } else {
        printf("Mang khong co so chan.\n");
    }

    return 0;
}

