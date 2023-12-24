#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Nhap chuoi 1
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Xoa ki tu cuong dong

    // Nhap chuoi 2
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Xoa ki tu xuong dong neu co

    // Noi chuoi
    strcat(str1, str2);

    // In ra chuoi
    printf("Concatenated string: %s\n", str1);

    return 0;
}

