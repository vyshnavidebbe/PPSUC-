#include <stdio.h>
#include <stdlib.h> // Required for abs()

int main() {
    int a, b;

    // Read the two points
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; 
    }

    // Ensure 'a' is the smaller number to simplify checks
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // Default result is "No"
    const char *result = "No"; 

    // --- Check for Connections ---

    // 1. Center Connection (1 and 10)
    // Only check for the ordered pair (1, 10) since a <= b
    if (a == 1 && b == 10) {
        result = "Yes";
    } 
    // 2. Ring Connections (1 through 9)
    // Check if both points are within the ring nodes (1 to 9)
    else if (a >= 1 && b <= 9) {
        // Connected if difference is 1 (sequential)
        // OR difference is 8 (1 and 9 closing the ring)
        int diff = abs(b - a);
        if (diff == 1 || diff == 8) {
            result = "Yes";
        }
    }

    // Print the final result
    printf("%s
", result);

    return 0;
}
