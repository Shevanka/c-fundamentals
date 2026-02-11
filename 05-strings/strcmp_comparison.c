#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Masukkan string pertama: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Masukkan string kedua: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    int hasil1 = strcmp(s1, s2);   // case-sensitive
    int hasil2 = strcmpi(s1, s2);  // non-case-sensitive

    printf("\nstrcmp()  = %d\n", hasil1);
    printf("strcmpi() = %d\n", hasil2);

    if (hasil1 == 0)
        printf("strcmp(): string sama persis (case-sensitive)\n");
    else
        printf("strcmp(): string berbeda (case-sensitive)\n");

    if (hasil2 == 0)
        printf("strcmpi(): string sama tanpa membedakan huruf besar-kecil\n");
    else
        printf("strcmpi(): string berbeda walau mungkin beda kapitalisasi\n");

    return 0;
}