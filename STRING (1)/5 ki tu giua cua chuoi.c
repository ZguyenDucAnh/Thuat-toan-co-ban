#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Nhap chuoi co so ki tu le trong khoang 5 < n < 20: ");
    scanf("%s", input);

    int length = strlen(input);

    if (length <= 5 || length >= 20 || length % 2 == 0) {
        printf("Chuoi khong hop le.\n");
        return 1;
    }

    int middle = length / 2;
    printf("5 ki tu giua cua chuoi la: ");
    int i;
    for ( i = middle - 2; i <= middle + 2; i++) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}

