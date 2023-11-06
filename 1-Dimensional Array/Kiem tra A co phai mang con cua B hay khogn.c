#include <stdio.h>
#include <stdbool.h>

bool isSubarray(int A[], int n, int B[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            i++;
        }
        j++;
    }
    return (i == n);
}

int main() {
    int n, m;

    printf("Nhap so luong phan tu A: ");
    scanf("%d", &n);

 
    printf("NhNhap so luong phan tu B: ");
    scanf("%d", &m);

    int A[n];
    int B[m];

    printf("Nhap cac phan tu cua mang A:\n");
    int i;
    for ( i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < m; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    if (isSubarray(A, n, B, m)) {
        printf("Mang A la mang con cua mang B.\n");
    } else {
        printf("Mang A khong phai la mang con cua B.\n");
    }

    return 0;
}

