#include <stdio.h>
#include <string.h>

int main() {
    char names[4][20], temp[20];
    int i, j;

    printf("Enter 4 names:\n");
    for(i = 0; i < 4; i++) {
        scanf("%s", names[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for(i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

