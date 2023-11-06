#include <stdio.h>
 
int main()
{
    int soDong = 5;
	//scanf("%d",&soDong);
    for(int i = 1; i <= soDong; i++) {
        //in so ky tu sao
        for(int j = i+1; j <= soDong; j++) {
            printf("*");
            
        }
 
        //xuong dong ke tiep
        printf("\n");
    }
    return 0;
}