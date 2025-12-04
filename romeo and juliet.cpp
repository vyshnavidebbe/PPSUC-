#include <stdio.h>

int main() {
    int X, Y, Z; // X: 5-rupee coins, Y: 10-rupee coins, Z: cost per chocolate
    long long total_money; // Use long long in case the total exceeds 32-bit int limit
    int max_chocolates;

    // Read the three integer inputs
    // The problem statement implies the inputs are given on separate lines
    if (scanf("%d", &X) != 1 || scanf("%d", &Y) != 1 || scanf("%d", &Z) != 1) {
        // Simple error handling for input failure
        return 1;
    }

    // 1. Calculate the Total Money
    // (X * 5) is the value from 5-rupee coins
    // (Y * 10) is the value from 10-rupee coins
    total_money = (long long)X * 5 + (long long)Y * 10;

    // 2. Calculate Maximum Chocolates
    // Integer division is used, which automatically gives the floor value (discarding the remainder)
    if (Z > 0) {
        max_chocolates = total_money / Z;
    } else {
        // Handle case where cost Z is non-positive (though constraints say 1<=Z)
        max_chocolates = 0; 
    }

    // Print the result
    printf("%d", max_chocolates);

    return 0;
}

