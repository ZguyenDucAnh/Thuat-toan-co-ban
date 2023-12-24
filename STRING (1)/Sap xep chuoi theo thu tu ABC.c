#include <stdio.h>
#include <string.h>

void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int partition(char *arr[], int low, int high) {
    char *pivot = arr[high];
    int i = low - 1;
    int j;

    for ( j = low; j <= high - 1; j++) {
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(char *arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int size;
    printf("Enter the number of strings: ");
    scanf("%d", &size);

    char *strings[size];
    printf("Enter %d strings:\n", size);
    int i;
    for (i = 0; i < size; i++) {
        strings[i] = (char *)malloc(100 * sizeof(char));
        scanf("%s", strings[i]);
    }

    quickSort(strings, 0, size - 1);

    printf("Sorted strings in alphabetical order:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

