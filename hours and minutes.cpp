#include <stdio.h>

int main() {
    int minutes;
    scanf("%d", &minutes);

    int hours = minutes / 60;
    int remainingMinutes = minutes % 60;

    printf("%d Hour(s) %d Minute(s)", hours, remainingMinutes);

    return 0;
}

