#include <stdio.h>

int main()
{
	
	//int n;//int n = sizeof(arr) / sizeof(arr[0]);
	int arr[7];
	 
	// Khởi tạo một mảng đếm
	int i,count[10] = {0}, cnt=0;
	for(i = 0; i<7; i++)
	{
		scanf("%d",&arr[i]);
	}
	// Duyệt qua từng phần tử của mảng
	for (i = 0; i < 7; i++)
	{
		// Kiểm tra xem phần tử hiện tại đã xuất hiện trước đó hay chưa
		int index = arr[i] - 1;
		if (count[index] == 0)
		{
			// Nếu chưa xuất hiện, khởi tạo giá trị đếm là 1
			count[index] = 1;
		}
		else
		{
			// Nếu đã xuất hiện, tăng giá trị đếm lên 1
			count[index]++;
		}
	}

	// In ra các số và số lần xuất hiện của chúng
	printf("\nOutput:\n");
	for (i = 0; i < 7; i++)
	{
		if(arr[i] % 2 == 0)
		{
			if (count[i] > 1)
			{
				printf("%d xuat hien  %d lan\n", i + 1, count[i]);
			}
		}
		
	}

	return 0;
}
