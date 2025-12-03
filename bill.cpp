#include <stdio.h>

int main() {
    int units;
    double bill;

    scanf("%d", &units);

    // Calculate bill based on unit slabs
    if(units < 200) {
        bill = units * 1.20;
    } else if(units < 400) {
        bill = units * 1.50;
    } else if(units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    // Apply surcharge
    if(bill > 400) {
        bill += 0.15 * bill;  // 15% surcharge
    } else if(bill < 400) {
        bill += 100;           // minimum surcharge Rs. 100
    }

    printf("%.2lf", bill);

    return 0;
}

