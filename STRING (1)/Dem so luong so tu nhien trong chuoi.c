#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s[100];
    int i=0,j,dem=0;
    printf("Nhap chuoi: ");
    gets(s);
    while (i<=strlen(s))
    {
        j=0;
        while ( s[i]>='0' && s[i]<='9' )
        {
             i++;
             j++;
        }
        i++;
        if (j!=0) dem++;
     }
     printf("So luong so tu nhien trong chuoi la: %d",dem);
     getch();
}







