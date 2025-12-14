#include <stdio.h>
#include <string.h>

int main() {
    char names[4][20] = {"Ravi", "Anu", "Kiran", "Meena"};
    char search[20];
    int i, found = 0;

    printf("Enter name to search: ");
    scanf("%s", search);

    for(i = 0; i < 4; i++) {
        if(strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Name found!");
    else
        printf("Name not found!");

    return 0;
}

