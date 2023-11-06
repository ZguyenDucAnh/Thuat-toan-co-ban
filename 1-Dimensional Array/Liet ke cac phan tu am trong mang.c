#include <stdio.h>

void liet_ke_so_am(float arr[], int n) {
    printf("Cac so am trong mang la: ");
    int co_so_am = 0; 
	int i;
    for ( i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            printf("%.2f ", arr[i]);
            co_so_am = 1; 
        }
    }
    
    if (co_so_am == 0) {
        printf("Khong co so am trong mang.");
    }
    
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    float arr[n];
    int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }
    
    liet_ke_so_am(arr, n);
    
    return 0;
}

