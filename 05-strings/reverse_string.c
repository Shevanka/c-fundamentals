#include <stdio.h>

int pjgstr(const char str[]) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int balikstr(char str[]) {
    int i = 0;
    int j = pjgstr(str) - 1;
    while (i < j) {
        // Tukar karakter pada posisi i dan j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return 0;
}

int main() {
    char str[100];

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    balikstr(str);

    printf("Panjang string: %d\n", pjgstr(str));
    printf("String setelah dibalik: %s\n", str);

    return 0;
}