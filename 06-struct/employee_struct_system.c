#include <stdio.h>
#include <string.h>

// typedef struct pegawai
typedef struct {
    int id;
    char nama[50];
    char tgl[15];
    char jk[15];
    float gaji;
} pegawai;


// Fungsi input (pass by reference)
void input(pegawai *p, int n) {

    for (int i = 0; i < n; i++) {
        (p+i)->id = i + 1;   // auto increment

        printf("Data pegawai ke-%d\n", i + 1);

        printf("Nama                : ");
        fflush(stdin);
        fgets((p+i)->nama, sizeof((p+i)->nama), stdin);
        (p+i)->nama[strcspn((p+i)->nama, "\n")] = 0;

        printf("Tgl lahir {dd-mm-yy}: ");
        fflush(stdin);
        fgets((p+i)->tgl, sizeof((p+i)->tgl), stdin);
        (p+i)->tgl[strcspn((p+i)->tgl, "\n")] = 0;

        printf("Jenis kelamin [L/P]: ");
        fflush(stdin);
        fgets((p+i)->jk, sizeof((p+i)->jk), stdin);
        (p+i)->jk[strcspn((p+i)->jk, "\n")] = 0;

        printf("Gaji/bln            : ");
        scanf("%f", &(p+i)->gaji);

        getchar(); // bersihkan newline
        printf("\n");
    }
}


// Fungsi tampil (pass by reference)
void tampil(pegawai *p, int n) {

    printf("\nData pegawai yang telah diinputkan\n\n");

    for (int i = 0; i < n; i++) {
        printf("No id       : %d\n", (p+i)->id);
        printf("Nama        : %s\n", (p+i)->nama);
        printf("Tgl Lahir   : %s\n", (p+i)->tgl);
        printf("Jenis Kelamin: %s\n", (p+i)->jk);
        printf("Gaji/bln    : Rp %.2f\n\n", (p+i)->gaji);
    }
}


int main() {
    int n;

    printf("Berapa jumlah pegawai : ");
    scanf("%d", &n);
    getchar();

    pegawai emp[n];
    pegawai *ptr = emp;  // pointer ke array (sesuai aturan soal 3)

    input(ptr, n);
    tampil(ptr, n);

    return 0;
}