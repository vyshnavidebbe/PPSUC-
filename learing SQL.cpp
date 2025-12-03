#include <stdio.h>

int main() {
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);

    // Total rows after adding extra rows
    int totalRows = R + E;

    // Total cells = total rows * columns
    int totalCells = totalRows * C;

    printf("%d", totalCells);

    return 0;
}

