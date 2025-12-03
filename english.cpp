#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Convert to lowercase for simplicity
    char lower = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;

    if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        printf("VOWEL");
    } else {
        printf("CONSONANT");
    }

    return 0;
}

