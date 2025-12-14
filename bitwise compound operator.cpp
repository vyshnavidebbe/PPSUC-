#include <stdio.h>

int main() {
    int a = 6, b = 3;

    a &= b;   // a = a & b
    printf("a &= b : %d\n", a);

    a |= b;   // a = a | b
    printf("a |= b : %d\n", a);

    a ^= b;   // a = a ^ b
    printf("a ^= b : %d\n", a);

    return 0;
}

