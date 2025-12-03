#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    // Calculate remaining donations
    int remaining = N - X;

    printf("%d", remaining);

    return 0;
}

