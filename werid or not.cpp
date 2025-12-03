#include <stdio.h>

int main() {
    int n;

    // Read the input integer
    if (scanf("%d", &n) != 1) {
        // Handle input error if necessary
        return 1; 
    }

    // Constraints check (n lies between 1 and 100)
    if (n < 1 || n > 100) {
        // Optional: Handle case outside constraints, 
        // but for this problem, we'll assume valid input.
        // printf("Input must be between 1 and 100.");
        // return 1;
    }

    // Conditional Actions
    
    // 1. If n is odd
    if (n % 2 != 0) {
        printf("weird");
    } 
    // If n is even, check the ranges
    else {
        // 2. If n is even and in the inclusive range of 2 to 5 (i.e., 2, 4)
        if (n >= 2 && n <= 5) {
            printf("not weird");
        } 
        // 3. If n is even and in the inclusive range of 6 to 20 (i.e., 6, 8, ..., 20)
        else if (n >= 6 && n <= 20) {
            printf("weird");
        } 
        // 4. If n is even and greater than 20 (and up to 100 due to constraint)
        else { // n > 20
            printf("not weird");
        }
    }

    return 0;
}


