#include <stdio.h>

int main() {
    int binary, count = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        if (binary % 10 == 1)
            count++;
        binary = binary / 10;
    }

    printf("Number of 1s = %d", count);

    return 0;
}

