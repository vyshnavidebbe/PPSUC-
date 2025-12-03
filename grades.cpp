#include <stdio.h>

int main() {
    int hurl, spin, speed;
    scanf("%d %d %d", &hurl, &spin, &speed);

    int c1 = hurl > 50;
    int c2 = spin > 60;
    int c3 = speed > 100;

    if (c1 && c2 && c3)
        printf("10");
    else if (c1 && c2)
        printf("9");
    else if (c2 && c3)
        printf("8");
    else if (c1 && c3)
        printf("7");
    else if (c1 || c2 || c3)
        printf("6");
    else
        printf("5");

    return 0;
}

