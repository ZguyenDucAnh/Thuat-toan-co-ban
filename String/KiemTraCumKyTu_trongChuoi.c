#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n, i;

	scanf("%d", &n);

	char names[n][50];


	for (i = 0; i < n; i++)
	{
		scanf("%s", names[i]);
	}

	// Nhap chu cai trong ten can tim
	char searchChar[50];

	scanf(" %s", &searchChar);  // su dung khoang trang truoc de tranh loi nhap buffer


	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for (i = 0; i < n; i++)
	{
		if (strstr(names[i], searchChar) != NULL)
		{
			printf("%s\n", names[i]);
		}
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
