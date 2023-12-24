#include <stdio.h>

void timViTri(int mang[], int do_dai, int tongTimKiem)
{
	for (int i = 0; i < do_dai - 1; i++)
	{
		for (int j = i + 1; j < do_dai; j++)
		{
			if (mang[i] + mang[j] == tongTimKiem)
			{
				printf("Vi tri cua cap so co tong la %d va %d la: %d, %d\n",
				       i, j, mang[i], mang[j]);
				return; //
			}
		}
	}

	//
	printf("Khong tim thay cap so nao co tong la %d.\n", tongTimKiem);
}

int main()
{
	int mang[] = {6,4,5,3,7,9};
	int do_dai = sizeof(mang) / sizeof(mang[0]);
	int tongTimKiem = 15;

	timViTri(mang, do_dai, tongTimKiem);

	return 0;
}
