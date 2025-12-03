#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Total amount in rupees
    int totalAmount = N * 2000;

    // Number of Rs.500 notes needed
    int notes500 = totalAmount / 500;

    printf("%d", notes500);

    return 0;
}

