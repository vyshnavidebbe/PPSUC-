#include <stdio.h>

int main() {
    int b1, b2, sum[10], i = 0, carry = 0, r1, r2;

    printf("Enter two binary numbers: ");
    scanf("%d %d", &b1, &b2);

    while (b1 > 0 || b2 > 0 || carry) {
        r1 = b1 % 10;
        r2 = b2 % 10;

        sum[i] = (r1 + r2 + carry) % 2;
        carry = (r1 + r2 + carry) / 2;

        b1 = b1 / 10;
        b2 = b2 / 10;
        i++;
    }

    printf("Binary Sum = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", sum[j]);
    }

    return 0;
}

