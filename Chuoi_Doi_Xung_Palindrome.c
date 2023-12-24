#include<stdio.h>  
int main()    
{    
	int n,r,sum=0,temp;    
	printf("enter the number=");    
	scanf("%d",&n);    
	temp=n;    
	while(n>0)    
	{    
		r=n%10;    
		sum=(sum*10)+r;    
		n=n/10;    
	}    
	if(temp==sum)    
		printf("chuoi doi xung");    
	else    
		printf("chuoi khong doi xung");   
	return 0;  
}   