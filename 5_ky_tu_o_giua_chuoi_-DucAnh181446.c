#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000];
	scanf("%[^\n]s", str);
	int i, len = strlen(str);
	
	if (len % 2 == 1 && len > 5 && len < 20)
	{
		for(i = (len/2)-2; i<=(len/2)+2; i++)
		{
			printf("%c",str[i]);
		}
	}


	return 0;
}
