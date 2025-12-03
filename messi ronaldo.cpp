#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messi_points = 2 * A + B;
    int ronaldo_points = 2 * X + Y;

    if (messi_points > ronaldo_points) {
        printf("Messi");
    } else if (ronaldo_points > messi_points) {
        printf("Ronaldo");
    } else {
        printf("Equal");
    }

    return 0;
}

