#include <stdio.h>

int main() {
    int N;
    int count = 0;

    // Read the input integer N
    if (scanf("%d", &N) != 1) {
        // Handle input error
        return 1;
    }

    // Since the constraint is 1 < N < 10000, N is always at least 2, 
    // so we don't need a special case for N=0.
    
    int temp_N = N; // Use a temporary variable to avoid modifying the original N

    // Loop until the number becomes 0
    while (temp_N > 0) {
        // Divide by 10 (removes the last digit)
        temp_N = temp_N / 10; 
        
        // Increment the digit count
        count++;
    }

    // Display the total digits count
    printf("%d", count);

    return 0;
}
