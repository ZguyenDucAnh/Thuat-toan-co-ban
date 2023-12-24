#include <stdio.h>

int main()
{
	char str[35] = "";
	scanf("%[^\n]s",&str);
	fflush(stdin);
	char c;
	scanf("%c",&c);
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			count++;
		}
	}

	printf("count: %d\n", count);

	return 0;
}
