// Chen so vao vi tri cuoi mang
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],i,index=5;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("nhap a[%d]: ", i);
		scanf("%d",&a[i]);
	}

	printf("Day so ban dau la ");
	for (int i = 0; i < n ; i++)
	{
		printf("%d ", a[i]);
	}

	for(i=n-1; i>=index; i--)
	{
		a[i+1]=a[i];
	}
	a[index]=99;
	n=n+1;

	printf("\nSap xep: ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}