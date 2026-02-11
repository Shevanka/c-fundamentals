#include <stdio.h>

struct date {
    int month, day, year;
};

int main() {
    struct date today;

    today.day = 12;
    today.month = 10;
    today.year = 2020;

    printf("%d-%d-%d\n", today.day, today.month, today.year);
    return 0;
}