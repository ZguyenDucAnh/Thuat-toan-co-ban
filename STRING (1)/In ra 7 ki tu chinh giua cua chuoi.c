#include <stdio.h>
#include <string.h>

int main() {
    char input[21]; // Chu?i có th? ch?a t?i da 20 kí t? + kí t? k?t thúc chu?i '\0'
    printf("Nh?p vào m?t chu?i kí t? t? 5 d?n 20 kí t?: ");
    scanf("%s", input);

    // Ki?m tra d? dài c?a chu?i
    int length = strlen(input);
    if (length < 5 || length > 20) {
        printf("Chu?i không h?p l?. Vui lòng nh?p l?i chu?i t? 5 d?n 20 kí t?.\n");
    } else {
        // Tính toán v? trí b?t d?u d? in ra 7 kí t? chính gi?a
        int start = (length - 7) / 2;
        printf("7 kí t? chính gi?a c?a chu?i là: %.7s\n", input + start);
    }

    return 0;
}

