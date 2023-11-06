#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri X can tim: ");
    scanf("%d", &x);

    int viTriCuoiCung = -1; 

   
    for ( i = n - 1; i >= 0; i--) {
        if (arr[i] == x) {
            viTriCuoiCung = i;
            break;
        }
    }

    if (viTriCuoiCung != -1) {
        printf("Phan tu %d xuat hien cuoi cung tai vi tri: %d\n", x, viTriCuoiCung);
    } else {
        printf("Phan tu %d khong xuat hienj trong mang.\n", x);
    }

    return 0;
}

