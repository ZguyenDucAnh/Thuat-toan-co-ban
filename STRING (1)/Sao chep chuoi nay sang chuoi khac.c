#include <stdio.h>

void copyString(const char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; 
}

int main() {
    char source[1000], destination[1000];
    
    printf("Nhap chuoi nguon: ");
    scanf("%[^\n]", source);
    
    copyString(source, destination);
    
    printf("Chuoi da sao chep: %s\n", destination);
    
    return 0;
}

