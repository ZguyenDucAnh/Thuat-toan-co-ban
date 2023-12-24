#include <stdio.h>
void swap(int a[], int i, int j)
{
	int swapp = a[i];
	a[i] = a[j];
	a[j] = swapp;
	
}


int main()
{
	int i, n = 4;
	int a[n];
	for(i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	swap(a,0,2);
	printf("\nmang vua nhap la: ");
	for(i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}
