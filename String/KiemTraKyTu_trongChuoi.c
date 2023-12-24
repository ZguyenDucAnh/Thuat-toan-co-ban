#include <stdio.h>


int main()
{
	int n,i;
	scanf("%d",&n);
	char ten[n][35], key;
	for(i = 0; i<n; i++)
	{
		scanf("%s",&ten[i]);
	}
	fflush(stdin);
	scanf("%c",&key);
	
	for (int i = 0; i < n; ++i)
	{
		if (ten[i][0] == key || ten[i][0] == key - 32)//('a' - 'A')
		{
			printf("%s\n", ten[i]);
		}
	}


	return 0;
}