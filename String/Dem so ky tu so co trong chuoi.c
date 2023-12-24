#include <stdio.h>
#include <string.h>
#include <ctype.h>
int dem(char c[])
{
	int i,count=0;
	int len =strlen(c);
	for(i = 0; i<len; i++)
	{
		if(c[i] >= '0' && c[i] <= '9')
		{
			count++;
		}
	}

	return count;

}


int main()
{
	char c[1000];
	fgets(c, 1000, stdin);

	printf("%d",dem(c));






	return 0;
}