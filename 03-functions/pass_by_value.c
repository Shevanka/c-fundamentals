#include <stdio.h>

void ubahNilai(int x) {
    x = x + 10;
    printf("Nilai di dalam fungsi: %d\n", x);
}

int main() {
    int a = 5;
    ubahNilai(a);
    printf("Nilai di luar fungsi: %d\n", a);
    return 0;
}