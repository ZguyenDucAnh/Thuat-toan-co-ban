#include <stdio.h>

int main()
{
	int f,s,t;
	scanf("%d%d%d",&f,&s,&t);
	// Input : 7  20 3
	/*
	Output:
	7 9 11
	13 15 17
	19

	*/
	int i,count=0;
	for(i = f; i<s; i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			count++;
			if(count==t)
			{
				printf("\n");
				count = 0;
			}
		}


	}



	return 0;
}