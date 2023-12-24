#include <stdio.h>
void chanGiam(int a[], int n)
{
	int i,j,tmp;
	for(i = 0; i<n; i++)
	{
		for(j = i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i = 0; i<n; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d ", a[i]);
		}
	}
}

void leTang(int a[], int n)
{
		int i,j,tmp;
	for(i = 0; i<n; i++)
	{
		for(j = i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for(i = 0; i<n; i++)
	{
		if(a[i] % 2 != 0)
		{
			printf("%d ", a[i]);
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);

	int i,j,a[n];

	for(i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	chanGiam(a,n);
	leTang(a,n);


	return 0;
}