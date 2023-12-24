#include <stdio.h>
#include <ctype.h>  

void swapCase(char *str) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char input[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]s", input);

    swapCase(input);

    printf("Chuoi sau khi hoan doi truong hop: %s\n", input);

    return 0;
}

