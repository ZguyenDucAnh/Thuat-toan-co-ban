#include <stdio.h>
#include <string.h>
int main()
{
	char c[1005];
	scanf("%s",c);
	//int cnt[256] = {0}; //Dem ca in hoa in thuong
	int cnt[26] = {0} 
	for(int i = 0; i<strlen(c); i++)
	{
		cnt[c[i]-'A']++;
	}
	
	for(int i = 0; i<strlen(c); i++)
	{
		if(cnt[i]!=0)
		{
			printf("\n%c-%d",(i+'A'),cnt[i]);
		}
	}
	
	
	
	return 0;
}