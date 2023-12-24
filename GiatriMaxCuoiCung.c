#include <stdio.h>

int main()
{
	// Khai báo m?ng và kh?i t?o giá tr?
	int arr[] = { 2,  5, 6, 5, 6, 2, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Tìm v? trí c?a giá tr? l?n nh?t
	int max_value = arr[0];
	int max_index = 0;

	for (int i = n-1; i>=0; i--)
	{
		if (arr[i] > max_value)
		{
			max_value = arr[i];
			max_index = i;
		}
	}

	// Hi?n th? k?t qu?
	printf("GTLN cuoi: %d\n", max_value);
	printf("Vi tri GTLN cuoi cung: %d\n", max_index);

	return 0;
}
