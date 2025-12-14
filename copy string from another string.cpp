#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];

    printf("Enter a string: ");
    scanf("%s", s1);

    strcpy(s2, s1);

    printf("Copied string: %s", s2);

    return 0;
}

