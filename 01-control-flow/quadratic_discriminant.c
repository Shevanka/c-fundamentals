#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2;

    // Input koefisien
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    // Menghitung diskriminan
    D = b * b - 4 * a * c;

    printf("Nilai diskriminan (D) = %.2f\n", D);

    // Penghitungan akar berdasarkan nilai diskriminan
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Akar real dan berbeda:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (D == 0) {
        x1 = -b / (2 * a);
        printf("Akar real dan kembar:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);
        printf("Akar kompleks:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}