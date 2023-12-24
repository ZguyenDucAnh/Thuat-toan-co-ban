#include <stdio.h>

 
void checkDoiXung(int n, int A[]){
    int i;
    int dem = 0;
    for(i = 0;i<n;i++){
        if(A[i] != A[n-i-1]){
          dem++;
        }
    }
    if(dem == 0) printf("\n\nMang doi xung nhau");
    else printf("\n\nMang khong doi xung nhau");
}
int main()
{
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d,",&n);
    int A[n];
     
    int i;
    for(i = 0; i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
     
    printf("\n\nMang vua nhap:\n");
     
    for(i = 0; i<n;i++){
        printf("%d  ", A[i]);
    }
     
    checkDoiXung(n, A);
}