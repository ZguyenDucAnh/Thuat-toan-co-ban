#include <stdio.h>
#include <stdbool.h>
bool check(int a){
    int sum = 0;//khai báo biến sum
    for(int i=1;i<=a/2;i++){ //tạo vòng lặp for để tìm ước số của a
        if(a%i==0) 
            sum+=i; //tổng các ước số của a
    }
    if(sum==a) return true; // trả về true
    return false;
}
int main(){
    int a;
	printf("Nhap so can kiem tra: ");
	scanf("%d",&a);
// xử dụng hàm check() đã tạo để kiểm tra số a do người dùng nhập vào
    if(check(a) ) // nếu a là số hoàn hảo thì hiển thị kết quả là số hoàn hảo
        printf("\n%d la so hoan hao",a);
    else
	{
		printf("\nKhong la so hoan hao");// và ngược lại hiển thị không phải là số hoàn hảo
	}

 

	return 0;
}