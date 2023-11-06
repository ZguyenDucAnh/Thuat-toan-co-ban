//Thuat toan kiem tra so chinh phuong
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool soCP(int n)
{
	int sqr = sqrt(n);
    if(sqr*sqr == n)
	{
        return true;
    }
    else
	{
		return false;	
	} 
}

int main()
{
	int n;
	printf("\nNhap size: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i = 0; i<n; i++)
	{
		printf("\nNhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT: ");
	
	for(int  i = 0; i<n; i++)
	{
		if(soCP(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}






