#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int extraChairs = X - Y;

    // If extraChairs is negative, no new chairs are needed
    if(extraChairs < 0) {
        extraChairs = 0;
    }

    printf("%d", extraChairs);

    return 0;
}

