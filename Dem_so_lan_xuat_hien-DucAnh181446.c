#include <stdio.h>

//const int N = 1e6;

int main()
{
	int n=6, a[100] = {4, 2, 2, 5, 6, 5};

	int cnt = 1;
	for(int i = 0; i < n; i++)
	{

		if(a[i] == a[i-1])
		{
			++cnt;
		}
		else
		{
			if(cnt >= 2 )
			{
				printf("\n%d-%d",a[i-1],cnt);
			}

			cnt = 1;
		}

	}


}