#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Apply 10% discount on online order
    double onlinePrice = N * 0.9;

    if (onlinePrice < M) {
        printf("ONLINE")

    } else if (onlinePrice > M) {
        printf("DININ");
    } else {
        printf("EITHER");
    }

    return 0;
}


