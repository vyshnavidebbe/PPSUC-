#include <stdio.h>

int main() {
    char names[5][20];
    int i;

    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("Total number of names = %d", 5);

    return 0;
}

