#include <stdio.h>

int main() {
    char color;
    scanf(" %c", &color);  // Space before %c to ignore any leading whitespace

    // Convert lowercase to uppercase if needed
    if(color >= 'a' && color <= 'z') {
        color = color - ('a' - 'A');
    }

    switch(color) {
        case 'V':
            printf("Violet");
            break;
        case 'I':
            printf("Indigo");
            break;
        case 'B':
            printf("Blue");
            break;
        case 'G':
            printf("Green");
            break;
        case 'Y':
            printf("Yellow");
            break;
        case 'O':
            printf("Orange");
            break;
        case 'R':
            printf("Red");
            break;
        default:
            printf("-1");
            break;
    }

    return 0;
}

