#include <stdio.h>

int main() {
    char names[3][20];
    int roll[3], i;

    printf("Enter roll number and name:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d %s", &roll[i], names[i]);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("Roll: %d  Name: %s\n", roll[i], names[i]);
    }

    return 0;
}

