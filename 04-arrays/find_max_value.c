#include <stdio.h>

void input(int arr[], int *n) {
    printf("Masukkan jumlah elemen: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100];
    int n;

    input(arr, &n);
    int max = findMax(arr, n);

    printf("Nilai terbesar adalah: %d\n", max);

    return 0;
}