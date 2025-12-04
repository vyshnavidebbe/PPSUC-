#include <stdio.h>

int main() {
    int inches;
    scanf("%d", &inches);

    double cm = inches * 2.54;

    printf("%.2lf", cm);

    return 0;
}

