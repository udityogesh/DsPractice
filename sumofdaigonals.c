#include <stdio.h>

// Define the size of the square matrix
#define N 3

int main() {
    // Example 3x3 matrix
    int arr[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int principalSum = 0;
    int secondarySum = 0;

    // A single loop is efficient enough
    for (int i = 0; i < N; i++) {
        // Add element from the principal diagonal (top-left to bottom-right)
        principalSum += arr[i][i];

        // Add element from the secondary diagonal (top-right to bottom-left)
        secondarySum += arr[i][N - 1 - i];
    }

    printf("Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the principal diagonal: %d\n", principalSum); // Output: 15
    printf("Sum of the secondary diagonal: %d\n", secondarySum); // Output: 15

    return 0;
}