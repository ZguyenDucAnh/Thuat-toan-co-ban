#include <stdio.h>

int check(int a)
{
	int sum = 0;
	for(int i=1; i<=a/2; i++)
	{
		if(a%i==0)
			sum+=i;
	}
	if(sum==a) return 1;
	return 0;
}
int main()
{
	int a,i;
	printf("a= : ");
	scanf("%d",&a);

	for(i = 1; i<a; i++)
	{
		if(check(i))
		{
			printf("%d ",i);
		}
	}



	return 0;
}