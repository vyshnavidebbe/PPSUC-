#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Donation amount = difference between their earnings
    int donation = Y - X;  // Y > X according to the problem

    printf("%d", donation);

    return 0;
}

