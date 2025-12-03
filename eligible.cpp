#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    // Check if attendance is at least 75%
    if (y * 100 >= 75 * x) {
        printf("ELIGIBLE");
    } else {
        printf("NOT ELIGIBLE");
    }

    return 0;
}


