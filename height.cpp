#include <stdio.h>

// Function to find the maximum of two integers
int find_max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;

    // Read the two integers (numerator x and denominator y)
    if (scanf("%d %d", &x, &y) != 2) {
        // Handle input error if necessary
        return 1;
    }

    // The height is the maximum of the numerator (x) and the denominator (y).
    // Note: The standard definition of height in number theory usually involves
    // absolute values and reduced fractions, but based on the problem description
    // and examples (5/24 -> 24, 29/3 -> 29), we just take max(x, y).
    int height = find_max(x, y);
    
    // Alternatively, using the built-in max from <stdlib.h> in C++ or a simple conditional:
    // int height = (x > y) ? x : y; 

    // Output the result
    printf("%d", height);

    return 0;
}
