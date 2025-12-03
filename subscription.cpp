#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // If meeting is longer than 40 minutes, subscription is needed
    if(X > 40) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}


