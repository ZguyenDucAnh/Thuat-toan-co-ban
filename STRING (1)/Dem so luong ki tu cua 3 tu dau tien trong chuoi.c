#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char s[100];
    int i, count = 0, tmp = 0;
    printf("Nhap chuoi: ");
    gets(s);
 
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && tmp < 3)
        {
            while (s[i] != ' ')
            {
                count++;
                ++i;
                ;
            }
            tmp++;
        }
    }
    printf("%d", count);

    return (0);
}

