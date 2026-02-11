#include <stdio.h>

int main() {
    int matrix[3][3];
    
    printf("Enter 9 numbers for the 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display row sums
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}