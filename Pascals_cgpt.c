#include <stdio.h>

// not so pascal's triangle
int main() {
    int rows = 4;

    for(int i = 1; i <= rows; i++) {

        // Print spaces for centering
        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Increasing numbers
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Decreasing numbers
        for(int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
