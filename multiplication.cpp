
#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers
    scanf("%d %d", &num1, &num2);

    // Multiply the numbers
    long long result = (long long)num1 * num2;

    // Print the result
    printf("%lld", result);

    return 0;
}


