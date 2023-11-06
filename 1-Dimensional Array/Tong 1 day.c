#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Nhap vao so phan tu cua day: ");
    scanf("%d", &n);
    
    int numbers[n];
    int i;
    for ( i = 0; i < n; i++) {
       
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    printf("Tong cac phan tu trong day la: %d\n", sum);
    
    return 0;
}

