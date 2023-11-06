//Thuat toan kiem tra doi xung
#include<stdio.h>

int kiemtra_doixung(int num)
{	
	int temp, r, sum = 0;
	for(temp=num;num!=0;num=num/10){
        r=num%10;
        sum=sum*10+r;
    }
    if(temp==sum)
    {
    	return 1;
	}
        
    else
    {
    	return -1;
	}
         
}



int main(){
    int num,r,sum=0,temp;

    printf("Enter your number: ");
    scanf("%d",&num);
	int result  = kiemtra_doixung(num);
	printf("\n%d",result);


    return 0;
}