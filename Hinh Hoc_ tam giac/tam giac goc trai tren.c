#include <stdio.h>
 
int main() {
   int n,i,j;
 
   n = 6;
 
   printf("Ve tam giac sao vuong can:\n");
   for(i = 0; i < n; i++) {

      for(j=i; j < n; j++)
         printf(" *",j);



      for(j=0; j<i; j++)
         printf("  "); 
 

 
      printf("\n");
       
   }
    
   return 0;
}