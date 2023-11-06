#include <stdio.h>
#include <string.h>


int main()
{
	char c[4];
	
	for(int i = 0; i<4; i++)
	{
		scanf("%s",&c[i]);
	}
	
	
	for(int i = 0; i<4; i++)
	{
		for(int j = i+1; j<4; j++)
		{
			if(c[i] > c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	
	
	for(int i = 0; i<4; i++)
	{
		printf("%c ",c[i]);
	}
	
	
	return 0;
}