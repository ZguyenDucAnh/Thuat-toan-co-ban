#include <stdio.h>

int main() {
  	// Khai báo ma trận 3x3
  	int soDong, soCot;
  	printf("Nhap so dong: "); 	scanf("%d",&soDong);
  	printf("\nNhap so cot: "); 	scanf("%d",&soCot);
  
  	int a[100][100];
  	for(int i = 0; i<soDong; i++)
  	{
  		for(int j = 0; j<soCot; j++)
  		{
  			printf("\na[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
	  	}
  	}
  	// In ma trận theo cột
  	for (int i = 0; i < soDong; i++)
	{
    	for (int j = 0; j < soCot; j++)
		{
      		printf("%d ", a[j][i]);
    	}
    	
		printf("\n");
  	}

  return 0;
}
