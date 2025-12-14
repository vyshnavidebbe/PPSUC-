#include <stdio.h>

int main() {
    char names[3][20];
    int marks[3], i;

    printf("Enter name and marks:\n");
    for(i = 0; i < 3; i++) {
        scanf("%s %d", names[i], &marks[i]);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("Name: %s  Marks: %d\n", names[i], marks[i]);
    }

    return 0;
}

