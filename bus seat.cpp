#include <stdio.h>

int main() {
    int N;

    // Read the seat number
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Determine the Deck
    const char *deck;
    int deck_seat_number; // Seat number within its deck (1 to 15)

    if (N >= 1 && N <= 15) {
        deck = "Lower";
        deck_seat_number = N;
    } else { // N >= 16 && N <= 30
        deck = "Upper";
        // Calculate the seat number within the 1-15 range of its deck
        deck_seat_number = N - 15;
    }

    // Determine the Type (Single or Double)
    // Based on the pattern: 1-10 are Double, 11-15 are Single
    const char *type;
    if (deck_seat_number >= 1 && deck_seat_number <= 10) {
        type = "Double";
    } else { // deck_seat_number >= 11 && deck_seat_number <= 15
        type = "Single";
    }

    // Output the final classification
    printf("%s %s", deck, type);

    return 0;
}

