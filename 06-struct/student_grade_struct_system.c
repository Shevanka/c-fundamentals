#include <stdio.h>
#include <string.h>

typedef struct {
    char nrp[20];
    char nama[50];
    float tugas;
    float uts;
    float uas;
    float akhir;
    char grade;
} Mahasiswa;

char hitungGrade(float nilai) {
    if (nilai >= 80) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

void inputData(Mahasiswa m[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Data Mahasiswa ke-%d\n", i + 1);
        printf("NRP       : ");
        scanf("%s", m[i].nrp);

        printf("Nama      : ");
        scanf(" %[^\n]", m[i].nama);

        printf("Nilai Tugas : ");
        scanf("%f", &m[i].tugas);

        printf("Nilai UTS   : ");
        scanf("%f", &m[i].uts);

        printf("Nilai UAS   : ");
        scanf("%f", &m[i].uas);

        m[i].akhir = 0.2 * m[i].tugas + 0.4 * m[i].uts + 0.4 * m[i].uas;
        m[i].grade = hitungGrade(m[i].akhir);

        printf("\n");
    }
}

void tampilData(Mahasiswa m[], int n) {
    printf("-------------------------------------------------------------------------------\n");
    printf("No\tNRP\tNama\t\tTugas\tUTS\tUAS\tAkhir\tGrade\n");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%-10s\t%.1f\t%.1f\t%.1f\t%.1f\t%c\n",
               i + 1,
               m[i].nrp,
               m[i].nama,
               m[i].tugas,
               m[i].uts,
               m[i].uas,
               m[i].akhir,
               m[i].grade);
    }

    printf("-------------------------------------------------------------------------------\n");
}

int main() {
    int n;

    printf("Jumlah mahasiswa = ");
    scanf("%d", &n);

    Mahasiswa mhs[n];

    printf("\n=== INPUT DATA ===\n");
    inputData(mhs, n);

    printf("\n=== DATA MAHASISWA ===\n");
    tampilData(mhs, n);

    return 0;
}