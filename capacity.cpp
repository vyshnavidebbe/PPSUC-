#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    double avg = (num1 + num2) / 2.0;

    printf("Average of %d and %d is: %.2lf", num1, num2, avg);

    return 0;
}

