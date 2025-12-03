#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    // Check if votes in favour are at least half
    if (X * 2 >= N) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

