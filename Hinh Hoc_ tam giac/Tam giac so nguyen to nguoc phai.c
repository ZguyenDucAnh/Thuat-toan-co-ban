#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void printPrimeTriangle(int n);
int isPrime(int num);

int isPrime(int num) {
	if (num < 2) {
		return 0; // Not prime
	}
	 int i;
	for (i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return 0; // Not prime
		}
	}
	return 1; // Prime
}

void printPrimeTriangle(int n) {
	int num = 2;
	int count = 0;
	int i, j;
	

	for (i = n; i > 0; i--) {
        for (j = i; j > 0; j--) {
            while (!isPrime(num)) {
                num++;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}



int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n;
	scanf("%d", &n);





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	printPrimeTriangle(n);




	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
