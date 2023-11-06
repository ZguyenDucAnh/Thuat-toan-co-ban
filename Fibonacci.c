//Thuat toan Fibonacci
#include <stdio.h>
int Fibo(int n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}
	
	return Fibo(n-1) + Fibo(n-2);
}



int main()
{
	int n;
	for(int i = 0; i<n; i++)
	{
		printf("%d ",Fibo(i));
	}
	
	
	return 0;
}