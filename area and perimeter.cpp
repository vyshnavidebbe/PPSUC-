#include <stdio.h>

int main() {
    int radius;
    scanf("%d", &radius);

    double pi = 3.14;
    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    printf("%.2lf
", area);
    printf("%.2lf", perimeter);

    return 0;
}


