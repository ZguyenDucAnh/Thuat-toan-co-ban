#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000], c;
	int i,count=0;
	fgets(a,1000,stdin);
	int len = strlen(a);
	scanf("%c",&c);
	for(i = 0; i<len-1; i++)
	{

		if(a[i] == c)
		{
			count++;
		}
	}

	printf("%d",count);
	return 0;
}