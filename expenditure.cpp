#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);

    int required = 30 * Y;

    if(X >= required) {
        printf("YEs");
    } else {
        printf("NO");
    }

    return 0;
}


