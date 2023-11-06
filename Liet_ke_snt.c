#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool snt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); ++i){
		if(a % i == 0) return false;
	}
	return true;
}

int main()
{	


	int m = 20;
	for(int i = 0; i<=m; i++)
	{
		if(snt(i))
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}