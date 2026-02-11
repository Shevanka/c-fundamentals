#include <stdio.h>
#include <string.h>

int string_length_manual(const char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Panjang string secara manual : %d\n", string_length_manual(str));
    printf("Panjang string menggunakan library: %lu\n", strlen(str));

    return 0;
}
