#include <stdio.h>

int main() {
    int num, rem, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10;
        if (rem != 0 && rem != 1) {
            flag = 0;
            break;
        }
        num = num / 10;
    }

    if (flag)
        printf("It is a binary number");
    else
        printf("It is NOT a binary number");

    return 0;
}

