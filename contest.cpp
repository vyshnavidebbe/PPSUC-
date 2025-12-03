include <stdio.h>

#int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    int total = A * 1 + B * 2;  // Easy = 1 point, Hard = 2 points

    if(total >= X) {
        printf("Qualify");
    } else {
        printf("Not Qualify");
    }

    return 0;
}

