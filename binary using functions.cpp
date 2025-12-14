#include <stdio.h>

int binToDec(int bin) {
    int rem, base = 1, dec = 0;

    while(bin > 0) {
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin = bin / 10;
    }
    return dec;
}

int main() {
    int bin;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    printf("Decimal number = %d", binToDec(bin));

    return 0;
}


