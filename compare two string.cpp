#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strcmp(s1, s2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

