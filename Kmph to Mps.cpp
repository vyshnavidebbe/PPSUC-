#include <stdio.h>

int main() {
    int speed;
    scanf("%d", &speed);

    double mps = speed * (5.0 / 18.0);

    printf("%.2lf", mps);

    return 0;
}

