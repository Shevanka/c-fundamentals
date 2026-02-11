#include <stdio.h>

// Iterative
long long factorial_iterative(int n) {
    if (n <= 1) {
        return 1;
    }

    long long result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

// Recursive
long long factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial_recursive(n - 1);
}

int main() {
    int angka;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    if (angka < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
        return 0;
    }

    printf("\nHasil menggunakan metode iterative : %lld\n", 
           factorial_iterative(angka));

    printf("Hasil menggunakan metode recursive : %lld\n", 
           factorial_recursive(angka));

    return 0;
}
