#include <stdio.h>

int bandingstr1(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
int main() {
    char str1[100], str2[100];

    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);

    int hasil = bandingstr1(str1, str2);

    if (hasil == 0) {
        printf("Kedua string sama.\n");
    } else if (hasil < 0) {
        printf("String pertama lebih kecil dari string kedua.\n");
    } else {
        printf("String pertama lebih besar dari string kedua.\n");
    }

    return 0;
}