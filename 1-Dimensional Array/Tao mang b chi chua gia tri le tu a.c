#include <stdio.h>
#include <conio.h>
#define MAX 100

void nhap(int a[], int &n) {
    do {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("So phan tu khong hop le. Xin kiem tra lai!\n");
        }
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");
}

void TaoMangBChiChuaGiaTriLeTuMangA(int a[], int n, int b[], int &nb) {
    nb = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[nb++] = a[i];
        }
    }
}

int main() {
    int n;
    int a[MAX];
    int b[MAX], nb = 0; // Mang b va so phan tu cua b

    printf("Nhap mang:\n");
    nhap(a, n);

    printf("Mang a: ");
    xuat(a, n);

    TaoMangBChiChuaGiaTriLeTuMangA(a, n, b, nb);

    printf("Mang b chi chua gia tri le cua mang a:\n");
    xuat(b, nb);

    getch();
    return 0;
}

