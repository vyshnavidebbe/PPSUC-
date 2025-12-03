#include <stdio.h>

#int main() {
    int C;
    scanf("%d", &C);

    // Convert Celsius to Fahrenheit
    double F = (C * 9.0 / 5.0) + 32;

    // Print result upto 2 decimal places
    printf("%.2lf", F);

    return 0;
}


