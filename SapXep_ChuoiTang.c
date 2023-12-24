#include<stdio.h>
#include<string.h>
int main()
{

	char str[5][25];
	char tmp[5];
	for(int i = 0; i<5; i++)
	{
		scanf("%s",str[i]);
	}

	for(int i=1; i<5; i++)
	{
		for(int j=1; j<5; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(tmp, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], tmp);
			}
		}
	}


	
	printf("\nOutput:\n");

	printf("\n");
	for (int i=0; i<5; i++)
	{
		printf("%s ", str[i]);
	}

	return 0;
}