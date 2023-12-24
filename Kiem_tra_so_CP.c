//Thuat toan kiem tra so chinh phuong
#include <stdio.h>
#include <math.h>
int soCP(int n)
{
	int sqr = sqrt(n);
	if(sqr*sqr == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n,i;
	do
	{
		printf("\nNhap n= ");
		scanf("%d",&n);
	}
	while(n<=0);


	printf("\nOUTPUT: ");

	for(i = 0; i<n; i++)
	{
		if(soCP(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}






