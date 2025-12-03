#include <stdio.h>

int sum_of_highest_two(int a, int b, int c) {
    // Find the smallest number and subtract it from the total sum
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return (a + b + c - min);
}

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    int alice_score = sum_of_highest_two(A1, A2, A3);
    int bob_score = sum_of_highest_two(B1, B2, B3);

    if (alice_score > bob_score) {
        printf("Alice");
    } else if (bob_score > alice_score) {
        printf("Bob");
    } else {
        printf("Tie");
    }

    return 0;
}

