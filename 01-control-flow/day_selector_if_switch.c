#include <stdio.h>

int main() {
    int pilihan;

    printf("Pilihan hari:\n");
    printf("1. Senin\n");
    printf("2. Selasa\n");
    printf("3. Rabu\n");
    printf("4. Kamis\n");
    printf("5. Jumat\n");
    printf("6. Sabtu\n");
    printf("7. Minggu\n");
    printf("Masukkan pilihan (1-7): ");
    scanf("%d", &pilihan);

    // Menggunakan else-if
    printf("\nMenggunakan else-if:\n");
    if (pilihan == 1) {
        printf("Hari yang dipilih: Senin\n");
    } else if (pilihan == 2) {
        printf("Hari yang dipilih: Selasa\n");
    } else if (pilihan == 3) {
        printf("Hari yang dipilih: Rabu\n");
    } else if (pilihan == 4) {
        printf("Hari yang dipilih: Kamis\n");
    } else if (pilihan == 5) {
        printf("Hari yang dipilih: Jumat\n");
    } else if (pilihan == 6) {
        printf("Hari yang dipilih: Sabtu\n");
    } else if (pilihan == 7) {
        printf("Hari yang dipilih: Minggu\n");
    } else {
        printf("Pilihan tidak valid.\n");
    }

    // Menggunakan switch case
    printf("\nMenggunakan switch case:\n");
    switch (pilihan) {
        case 1:
            printf("Hari yang dipilih: Senin\n");
            break;
        case 2:
            printf("Hari yang dipilih: Selasa\n");
            break;
        case 3:
            printf("Hari yang dipilih: Rabu\n");
            break;
        case 4:
            printf("Hari yang dipilih: Kamis\n");
            break;
        case 5:
            printf("Hari yang dipilih: Jumat\n");
            break;
        case 6:
            printf("Hari yang dipilih: Sabtu\n");
            break;
        case 7:
            printf("Hari yang dipilih: Minggu\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}