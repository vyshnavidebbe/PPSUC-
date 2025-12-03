#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Total cost for 4 friends
    int totalCost = 4 * X;

    if(totalCost <= 1000) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
