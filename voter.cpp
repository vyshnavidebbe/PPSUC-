#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // A person is eligible to vote if age is 18 or above
    if(X >= 18) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

