#include <stdio.h>

int main()
{
	int a, b, n, count = 1;

	// Nhập số đầu và số cuối
	printf("So dau: ");
	scanf("%d", &a);
	printf("So cuoi: ");
	scanf("%d", &b);

	// Nhập số đêm
	printf("So dem: ");
	scanf("%d", &n);

	// In ra các số lẻ từ a đến b
	for (int i = a; i <= b; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
			if (count == n)
			{
				printf("\n");
				count = 1;
			}
			else
			{
				count++;
			}
		}
	}

	return 0;
}
