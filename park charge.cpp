#include <stdio.h>

int main() {
    int X, Y, H;
    scanf("%d %d %d", &X, &Y, &H);

    int totalCharge;

    if(H <= 1) {
        totalCharge = X;  // Only the first hour charge
    } else {
        totalCharge = X + (H - 1) * Y;  // First hour + extra hours
    }

    printf("%d", totalCharge);

    return 0;
}
