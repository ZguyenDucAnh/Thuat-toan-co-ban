#include <stdio.h>
#include <string.h>

int main()
{
	char ten[5][100];
	char t[20];
//	printf("%s",ten);
	for(int i = 0; i<5; i++)
	{
		
		scanf("%s",&ten[i]);
	}
	
	fflush(stdin);
	printf("\nOUTPUT:\n");
   for (int i = 1; i < 5; i++) {
      for (int j = 1; j < 5; j++) {
         if (strcmp(ten[j - 1], ten[j]) > 0) {
            strcpy(t, ten[j - 1]);
            strcpy(ten[j - 1], ten[j]);
            strcpy(ten[j], t);
         }
      }
   }
	
	
	for(int i = 0; i<5; i++)
	{
		printf("%s ",ten[i]);
	}
	return 0;
}