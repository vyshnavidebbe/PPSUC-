#include <stdio.h>

int main() {
    int a = 4;

    a <<= 1;  // a = a << 1
    printf("a <<= 1 : %d\n", a);

    a >>= 1;  // a = a >> 1
    printf("a >>= 1 : %d\n", a);

    return 0;
}

