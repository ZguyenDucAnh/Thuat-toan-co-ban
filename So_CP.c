#include <stdio.h>
#include <math.h>


int scp(int n)
{
	int sqr = sqrt(n);
	return (sqr*sqr == n);
}

int main()
{

	int n;
	scanf("%d",&n);

	int a[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}



	for(int i = 0; i < n; i++)
	{
		if(scp(a[i]))
		{
			printf("%d ",a[i]);
		}
	}

	return 0;
}