#include <stdio.h>
#include <conio.h>
#include <string.h>
int demkthoa(char s[])
{
	int i,dem=0;
	for (i=0;i<strlen(s);i++)
        if ( s[i]>='A' && s[i]<='Z' )
			dem++;
	return dem;
}
void main()
{
    char s[100];
    printf("Nhap chuoi: ");
    gets(s);
    printf("So luong chu cai viet hoa la: %d",demkthoa(s));
    getch();
}

