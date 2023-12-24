//gtnn cuoi cung
#include <stdio.h>

int main()
{
	//
	int arr[] = { 2,  5, 6, 5, 6, 2, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	// vi tri gtnn cuoi cung
	int min_value = arr[0];
	

	int min_Index = n - 1;
	for (int i = n - 2; i >= 0; i--)
	{
		if (arr[i] < arr[min_Index])
		{
			min_value = arr[0];
			min_Index = i;
		}
	}

	// result
	printf("GTNN cuoi cung: %d\n", min_value);
	printf("Vi tri GTNN cuoi cung: %d\n", min_Index);

	return 0;
}
