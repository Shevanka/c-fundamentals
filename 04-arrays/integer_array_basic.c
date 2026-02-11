#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Element ke-%d: %d\n", i + 1, array[i]);
    }
}