#include <stdio.h>
#include <string.h>
#include <math.h>

// Fungsi membandingkan dua string tanpa membedakan huruf besar-kecil
int bandingstr2(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        char c1 = s1[i];
        char c2 = s2[i];

        // Jika karakter uppercase, ubah ke lowercase secara manual
        if (c1 >= 'A' && c1 <= 'Z')
            c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z')
            c2 += 32;

        if (c1 != c2)
            return (c1 < c2) ? -1 : 1;  // perbedaan ditemukan

        i++;
    }

    // Jika sampai akhir string sama, tapi panjang berbeda
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else if (s1[i] == '\0')
        return -1;
    else
        return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    int hasil = bandingstr2(str1, str2);

    if (hasil == 0)
        printf("Kedua string SAMA (non-case-sensitive)\n");
    else if (hasil < 0)
        printf("String pertama LEBIH KECIL dari string kedua (non-case-sensitive)\n");
    else
        printf("String pertama LEBIH BESAR dari string kedua (non-case-sensitive)\n");

    return 0;
}