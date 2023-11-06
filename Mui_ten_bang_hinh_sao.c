#include <stdio.h>


int main()
{
	int n;
	printf("\nn= ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		//Xay phan dau ~
		for(int j=1; j<=2*(i-1); j++)
		{
			printf("~");
		}
		
		for(int j=1; j<=n-i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	for(int i=n-1; i>=1; i--)
	{
		//Xay phan dau ~
		for(int j=1; j<=2*(i-1); j++)
		{
			printf("~");
		}
		
		for(int j=1; j<=n-i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}	
	
	
	
	return 0;
}