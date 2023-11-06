#include <stdio.h>

int USCLN(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	
	return USCLN(b, a%b);
}


int main()
{
	int m, n;
	scanf("%d%d",&m,&n);
	int result = USCLN(m,n);
	printf("USCLN: %d",result);
	
	return 0;
}