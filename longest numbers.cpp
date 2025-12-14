#include <stdio.h>
#include <string.h>

int main() {
    char names[4][20];
    int i, max = 0, index = 0;

    printf("Enter 4 names:\n");
    for(i = 0; i < 4; i++) {
        scanf("%s", names[i]);
    }

    for(i = 0; i < 4; i++) {
        if(strlen(names[i]) > max) {
            max = strlen(names[i]);
            index = i;
        }
    }

    printf("Longest name is: %s", names[index]);

    return 0;
}

