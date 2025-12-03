#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int product = A * B;

    // Calculate absolute difference
    int difference = abs(sum - product);

    printf("%d", difference);

    return 0;
}

