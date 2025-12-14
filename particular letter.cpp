#include <stdio.h>

int main() {
    char names[5][20], ch;
    int i;

    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter starting letter: ");
    scanf(" %c", &ch);

    printf("Names starting with %c:\n", ch);
    for(i = 0; i < 5; i++) {
        if(names[i][0] == ch) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}

