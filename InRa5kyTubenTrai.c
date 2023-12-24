#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *left(char str[], int len)
{
	int n = len;
	if(len >=strlen(str)) return str; // Do dai lon hon do dai thuc thi lay ca chuoi
	char *str1 = malloc(n);
	for(int i = 0; i<n; i++)
	{
		str1[i] = str[i];
	}
	str1[n] = '\0';
	return str1;
	
	
}	



int main()
{
	
	char str[20];
	printf("\nInput str: ");
	fgets(str, 20, stdin);
	printf("%s",left(str,5));
	return 0;
}
