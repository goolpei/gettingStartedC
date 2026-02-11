#include <stdio.h>

int main() {
    int matrix[3][3];
    int even = 0, odd = 0;

    printf("Enter 9 numbers for a 3x3 matrix: ");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            
            // Check if even or odd
            if(matrix[i][j] % 2 == 0) even++;
            else odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d", odd);

    return 0;
}