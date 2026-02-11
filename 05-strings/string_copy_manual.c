#include <stdio.h>

int cpystr(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Masukkan sebuah string: ");
    fgets(str1, sizeof(str1), stdin);

    cpystr(str2, str1);

    printf("String asli: %s", str1);
    printf("String salinan: %s", str2);

    return 0;
}