#include <stdio.h>

int main() {
    int bayar;
    printf("Masukkan jumlah bayar: ");
    scanf("%d", &bayar);

    if (bayar >= 100000) {
        printf("Anda mendapatkan diskon 5%%\n");
        bayar = bayar - (0.05 * bayar);
    } 

    printf("Total pembelian adalah Rp.%d\n", bayar);

    if (bayar < 100000) {
        printf("Anda tidak mendapat diskon\n");
        bayar = bayar - (0 * bayar);
    }
    
    return 0;
}