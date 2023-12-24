#include <stdio.h>
#include <string.h>

int main() {
    char input[21]; // Chu?i c� th? ch?a t?i da 20 k� t? + k� t? k?t th�c chu?i '\0'
    printf("Nh?p v�o m?t chu?i k� t? t? 5 d?n 20 k� t?: ");
    scanf("%s", input);

    // Ki?m tra d? d�i c?a chu?i
    int length = strlen(input);
    if (length < 5 || length > 20) {
        printf("Chu?i kh�ng h?p l?. Vui l�ng nh?p l?i chu?i t? 5 d?n 20 k� t?.\n");
    } else {
        // T�nh to�n v? tr� b?t d?u d? in ra 7 k� t? ch�nh gi?a
        int start = (length - 7) / 2;
        printf("7 k� t? ch�nh gi?a c?a chu?i l�: %.7s\n", input + start);
    }

    return 0;
}

