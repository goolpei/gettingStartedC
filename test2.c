#include <stdio.h>

int main() {
    int negative = 0, zero = 0, positive = 0, i = 0;
    char choice;
    int nums[100];

    printf("Enter numbers:\n");

    while (1) {
        scanf("%d", &nums[i]);
        printf("Continue (y/n)?: ");
        scanf(" %c", &choice);  // space before %c fixes newline issue

        if (choice != 'Y' && choice != 'y')
            break;

        i++;
    }

    // Count the numbers
    for (int j = 0; j <= i; j++) {
        if (nums[j] < 0)
            negative++;
        else if (nums[j] == 0)
            zero++;
        else
            positive++;
    }

    printf("\nNegatives: %d\nZeroes: %d\nPositives: %d\n", negative, zero, positive);

    return 0;
}
