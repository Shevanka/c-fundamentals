#include <stdio.h>

int main() {
    int n, i, j;
    char pilihan;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    printf("\nApakah anda ingin keluar program? (y/t) ");
    scanf(" %c", &pilihan);
    while (pilihan != 'y' && pilihan != 'Y');
    return 0;
}