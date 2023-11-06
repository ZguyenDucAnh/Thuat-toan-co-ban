#include <stdio.h>

int main()
{	
	int n = 5;
	for(int i = 1; i<=n; i++)
	{
		int init = i;
		int count = n-1;
		for(int j = 1; j<=i; j++)
		{
			printf("%d ",init);
			init += count;
			--count;
		}
		
		printf("\n");
	}
	
	return 0;
}