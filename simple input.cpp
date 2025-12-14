#include <stdio.h>

int main() {
    int a, b;

    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);

    a += b;
    printf("a += b : %d\n", a);

    a -= b;
    printf("a -= b : %d\n", a);

    return 0;
}

