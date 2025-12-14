#include <stdio.h>
#include <string.h>

int main() {
    char names1[3][20] = {"Ram", "Sita", "Lakshman"};
    char names2[3][20];
    int i;

    for(i = 0; i < 3; i++) {
        strcpy(names2[i], names1[i]);
    }

    printf("Copied names:\n");
    for(i = 0; i < 3; i++) {
        printf("%s\n", names2[i]);
    }

    return 0;
}

