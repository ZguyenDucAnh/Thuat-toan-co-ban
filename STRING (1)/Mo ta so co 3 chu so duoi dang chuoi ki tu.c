#include <stdio.h>

int main() {
    int num, hundreds, tens, ones;

    printf("Nhap so co 3 chu so: ");
    scanf("%d", &num);

   
    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    
    char *units[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};

    // In ra dòng ch? mô t? giá tr? s?
    printf("Mo ta %d: ", num);
    
    if (hundreds > 0) {
        printf("%s tram ", units[hundreds]);
    }

    if (tens > 1) {
        printf("%s muoi ", units[tens]);
        if (ones > 0) {
            printf("%s", units[ones]);
        }
    } else if (tens == 1) {
        printf("mu?i ");
        if (ones > 0) {
            printf("%s", units[ones]);
        }
    } else {
        if (ones > 0) {
            printf("%s", units[ones]);
        }
    }

    printf("\n");

    return 0;
}

