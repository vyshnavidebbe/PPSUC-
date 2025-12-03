#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if(n == 1 || n >= 5) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

