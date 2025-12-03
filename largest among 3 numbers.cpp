#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = num1;

    if(num2 > largest) {
        largest = num2;
    }
    if(num3 > largest) {
        largest = num3;
    }

    printf("%d", largest);

    return 0;
}

