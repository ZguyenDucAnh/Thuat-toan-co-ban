#include <stdio.h>

int main() {
    int i, a[100] = {1, 2, 6, 34, 9, 10, 8};
    
    // Tìm vị trí của số lớn nhất
    int max = a[0];
    int maxIndex;
    for (int i = 0; i < 7; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }

    // Sắp xếp tăng dần trước số lớn nhất
    for (int i = 0; i < maxIndex; i++) {
        for (int j = i + 1; j < maxIndex; j++) {
            if (a[i] > a[j]) {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    // Sắp xếp giảm dần sau số lớn nhất
    for (int i = maxIndex + 1; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (a[i] < a[j]) {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    // In mảng sau khi sắp xếp
    for (int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
