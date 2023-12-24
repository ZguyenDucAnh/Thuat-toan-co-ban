#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[100] = "Hello World";
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}else if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	
	for(int i = 0; i<strlen(s); i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
