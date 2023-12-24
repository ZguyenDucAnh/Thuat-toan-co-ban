#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    
    int first = 0, second = 1, next;
    
    printf("Day Fibonacci gom %d so dau tien la: ", n);
    int i;
    for ( i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\n");
    
    return 0;
}

