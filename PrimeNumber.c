#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool snt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); ++i){
		if(a % i == 0) return false;
	}
	return true;
}
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        if(snt(a[i]))
        {
        	printf("%4d", a[i]);
		}
    }
}


 
int main(){
	printf("So nguyen to:\n");
	int a[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(a, n);
    XuatMang(a, n);
    
    
    
}