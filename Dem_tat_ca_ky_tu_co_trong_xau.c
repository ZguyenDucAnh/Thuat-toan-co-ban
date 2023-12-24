#include <stdio.h>
#include <string.h>
int main()
{
	char c[1005];
	scanf("%s",c);
	int cnt[256] = {0}; //Dem tat ca cac phan tu
	for(int i = 0; i<strlen(c); i++)
	{
		cnt[(int)c[i]]++;
	}
	
	for(int i = 0; i<256; i++)
	{
		if(cnt[i]!=0)
		{
			printf("\n%c %d",i,cnt[i]);
		}
	}
	
	
	return 0;
}