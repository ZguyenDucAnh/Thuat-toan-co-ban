#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// integer n find fac: vd 12345 -> 5+4+3+2+1 = 15
//Done
int main()
{
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,sotachra,s=0; // s: sum
	scanf("%d",&n);
	for(; n!=0;)
	{
		sotachra = n % 10;
		s += sotachra;
		n /= 10;
	}



	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%d",s);








	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
