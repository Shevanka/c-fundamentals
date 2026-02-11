#include <stdio.h>
#define MAX 100

int main() {
    int n, i;
    int arr[MAX];
    int max;

    printf("Masukkan jumlah elemen (maksimal %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Jumlah elemen tidak valid.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Nilai terbesar adalah: %d\n", max);

    return 0;
}