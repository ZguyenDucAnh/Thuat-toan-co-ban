#include <stdio.h>
 
int main()
{
    int soDong = 5;
	//scanf("%d",&soDong);
    for(int i = 1; i <= soDong; i++) {
    	
        //in so ky tu sao
        for(int j = 1; j <= i; j++) {
            printf("*");
            
        }
 		printf("\n");
        //xuong dong ke tiep
        
    }
    return 0;
}