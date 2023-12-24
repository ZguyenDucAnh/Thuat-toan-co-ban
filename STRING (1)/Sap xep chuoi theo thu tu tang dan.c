#include <stdio.h>
#include <string.h>

void sortStringsAscending(char *arr[], int size) {
    char *temp;
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;

    printf("Nhap so luong chuoi: ");
    scanf("%d", &size);

    char *arr[size];
    int i;

    for ( i = 0; i < size; i++) {
        char buffer[1000];
        printf("Nhap chuoi %d: ", i + 1);
        scanf("%s", buffer);
        arr[i] = strdup(buffer); 
    }

    sortStringsAscending(arr, size);

    printf("Mang chuoi sau khi sap xep la:\n");
    for ( i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    for ( i = 0; i < size; i++) {
        free(arr[i]);
    }

    return 0;
}

