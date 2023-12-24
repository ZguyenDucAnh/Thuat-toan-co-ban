#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char xau[30];
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    for(int i=0;i<strlen(xau);i++)
    {
        if(xau[i]!=32)
        {
            printf("%c",xau[i]);
        }
        else         {
         for(int j=strlen(xau)-1;j>=i;j--)
         {
            if(xau[j]==32)
            {
               for(int k=j;k<=strlen(xau)-1;k++)
               printf("%c",xau[k]);
               break;
            }
         }
         break;
      }
    }
    return 0;
}
