#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int checkDoiXung(int n, int A[])
{
	int i;
	int dem = 0;
	for(i = 0; i<n; i++)
	{
		if(A[i] != A[n-i-1])
		return 0;	
	}
	return 1;
}
int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d,",&n);
	int A[n];

	int i;
	for(i = 0; i<n; i++)
	{

		scanf("%d", &A[i]);
	}




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d",checkDoiXung(n, A));

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
