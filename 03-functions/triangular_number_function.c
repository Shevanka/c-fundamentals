#include <stdio.h>

// 1 (a dan b). Fungsi triangular berisi jumlah segitiga
int triangular(int n) {
    int sum;
    for (int i = 1; i <= n; i++) {
        sum = (i * (i + 1)) / 2;
    }
    printf("Triangular %d adalah %d\n",n, sum);
}

// 1c. Memanggil fungsi triangular sesuai kebutuhan
int main() {
    int n;
    printf("Masukkan angka triangular: ");
    scanf("%d", &n);
    triangular(n);
}