#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
}

void MaxposMin(int a[], int n)
{
	int i,j;
	int max_Index=0;
	int min_Index = n-1;
	
	for(i =0 ; i<n; i++)
	{
		if(a[i] > a[max_Index])
		{
			max_Index = i;
		}
	}
	
	for(i = n-2; i>=0; i--)
	{
		if(a[i] < a[min_Index])
		{
			min_Index = i;
		}
	}
	
	swap(&a[max_Index], &a[min_Index]);
	
}




int main()
{
	int i,n = 5;
	int a[5] = {9,2,18,4,1};
	MaxposMin(a,n);
	for(i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}