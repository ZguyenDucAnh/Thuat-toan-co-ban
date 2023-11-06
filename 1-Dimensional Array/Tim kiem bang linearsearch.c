#include <stdio.h>

void linearSearch(int arr[], int size, int key) {
    printf("Vi tri cua gia tri %d trong mang: ", key);
    int found = 0;
int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay.");
    }

    printf("\n");
}

int main() {
    int size, key;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
int i;
    int arr[size];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &key);

    linearSearch(arr, size, key);

    return 0;
}

