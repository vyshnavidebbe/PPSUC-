#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from input
    scanf("%d %d", &num1, &num2);

    // Calculate modulus
    int mod = num1 % num2;

    // Print result
    printf("%d", mod);

    return 0;
}

