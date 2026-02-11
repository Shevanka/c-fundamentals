#include <stdio.h>

int n;

// 1 (a dan b). Fungsi menu berisi pilihan menu
int menu() {
    printf("Pilihan Menu:\n");
}

//1c. Memanggil fungsi menu sesuai kebutuhan
int main() {
    printf("Masukkan jumlah menu yang diinginkan: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        menu();
    }
}