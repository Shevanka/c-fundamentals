#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[50];
    float tugas;
    float uts;
    float uas;
    float akhir;
    char grade;
} mahasiswa;

// Struct untuk menyimpan nilai tertinggi
typedef struct {
    char nama[50];
    float nilai;
} maks;

// Hitung grade
char hitung_grade(float n) {
    if (n >= 85) return 'A';
    if (n >= 75) return 'B';
    if (n >= 65) return 'C';
    if (n >= 55) return 'D';
    return 'E';
}

void input(mahasiswa *m, int n) {
    for (int i = 0; i < n; i++) {

        printf("Mahasiswa ke-%d\n", i + 1);
        printf("Nama          : ");
        fflush(stdin);
        fgets((m+i)->nama, sizeof((m+i)->nama), stdin);
        (m+i)->nama[strcspn((m+i)->nama, "\n")] = 0;

        printf("Nilai tugas   : ");
        scanf("%f", &(m+i)->tugas);

        printf("Nilai uts     : ");
        scanf("%f", &(m+i)->uts);

        printf("Nilai uas     : ");
        scanf("%f", &(m+i)->uas);

        getchar();
        printf("\n");

        // Hitung nilai akhir
        (m+i)->akhir = ((m+i)->tugas * 0.3f) +
                       ((m+i)->uts   * 0.3f) +
                       ((m+i)->uas   * 0.4f);

        (m+i)->grade = hitung_grade((m+i)->akhir);
    }
}

void tampil(mahasiswa *m, int n) {
    maks tertinggi;
    tertinggi.nilai = -1;

    printf("\nDAFTAR NILAI\n");
    printf("MATAKULIAH KONSEP PEMROGRAMAN\n");
    printf("==============================================================\n");
    printf("No   Nama Mahasiswa        Nilai                  Grade\n");
    printf("                         Tugas  UTS  UAS  Akhir\n");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-4d %-20s  %-5.0f %-4.0f %-4.0f %-6.1f   %c\n",
               i+1,
               (m+i)->nama,
               (m+i)->tugas,
               (m+i)->uts,
               (m+i)->uas,
               (m+i)->akhir,
               (m+i)->grade);

        // Cek nilai tertinggi
        if ((m+i)->akhir > tertinggi.nilai) {
            tertinggi.nilai = (m+i)->akhir;
            strcpy(tertinggi.nama, (m+i)->nama);
        }
    }

    printf("--------------------------------------------------------------\n");
    printf("\nTotal Mahasiswa = %d\n\n", n);

    printf("Nilai tertinggi\n");
    printf("Nama  : %s\n", tertinggi.nama);
    printf("Nilai : %.1f\n\n", tertinggi.nilai);

    printf("Press any key to continue");
}

int main() {
    int n;
    printf("Berapa jumlah mahasiswa : ");
    scanf("%d", &n);
    getchar();

    mahasiswa data[n];
    mahasiswa *ptr = data;   // pointer ke array (sesuai instruksi pointer-to-array)

    input(ptr, n);
    tampil(ptr, n);

    return 0;
}