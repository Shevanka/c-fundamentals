#include <stdio.h>

int main() {
    int angka, hasil;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    hasil = angka % 2;
    printf("Bilangan yang diinputkan : %d", angka);

    if (hasil == 0) {
        printf("\n%d adalah bilangan genap\n", angka);
    }

    else {
        printf("\n%d adalah bilangan ganjil\n", angka);
    }

    return 0;
}