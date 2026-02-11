#include <stdio.h>

// Fungsi untuk mencari bilangan terbesar dari dua bilangan
int bil_Terbesar(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Input dua bilangan dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &num1);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &num2);

    // Mencari dan menampilkan bilangan terbesar
    int terbesar = bil_Terbesar(num1, num2);
    printf("Bilangan terbesar adalah: %d\n", terbesar);

    return 0;
}