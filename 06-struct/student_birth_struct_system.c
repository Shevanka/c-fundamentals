#include <stdio.h>
#include <string.h>

#define MAKS 20

struct date {
    int month, day, year;
};

struct student {
    char name[30];
    struct date birthday;
};

int main() {
    struct student data_mhs[MAKS];
    int i = 0;
    char lagi;

    do {
        if (i >= MAKS) {
            printf("Data sudah mencapai batas maksimum (%d).\n", MAKS);
            break;
        }

        printf("Name: ");
        fgets(data_mhs[i].name, sizeof(data_mhs[i].name), stdin);

        // Hapus newline dari fgets
        data_mhs[i].name[strcspn(data_mhs[i].name, "\n")] = '\0';

        // Input birthday menggunakan fgets + sscanf (lebih aman)
        char input[20];
        printf("Birthday (mm-dd-yyyy): ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%d-%d-%d",
                   &data_mhs[i].birthday.month,
                   &data_mhs[i].birthday.day,
                   &data_mhs[i].birthday.year) != 3) {

            printf("Format salah. Gunakan mm-dd-yyyy\n\n");
            continue;  // ulangi input untuk data ini
        }

        i++;

        printf("Mau memasukkan data lagi (Y/T)? ");
        lagi = getchar();

        // Bersihkan buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("\n");

    } while (lagi == 'Y' || lagi == 'y');

    printf("\nDATA MAHASISWA\n\n");

    for (int j = 0; j < i; j++) {
        printf("%d. Name: %s\n", j + 1, data_mhs[j].name);
        printf("   Birthday: %02d-%02d-%04d\n\n",
               data_mhs[j].birthday.month,
               data_mhs[j].birthday.day,
               data_mhs[j].birthday.year);
    }

    return 0;
}
