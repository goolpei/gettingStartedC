#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to safely read a double
int getDouble(const char *prompt, double *value) {
    char buffer[100];
    char extra;

    while (1) {
        printf("%s", prompt);

        if (!fgets(buffer, sizeof(buffer), stdin)) {
            return 0; // EOF or error
        }

        // sscanf tries to read a double and check for extra junk
        if (sscanf(buffer, "%lf %c", value, &extra) == 1) {
            return 1; // success
        } else {
            printf("Invalid input, please enter a number.\n");
        }
    }
}

// Function to safely read an operator
int getOperator(char *op) {
    char buffer[100];

    while (1) {
        printf("Enter operator (+, -, *, /): ");

        if (!fgets(buffer, sizeof(buffer), stdin)) {
            return 0; // EOF or error
        }

        // Remove newline if present
        buffer[strcspn(buffer, "\n")] = 0;

        if (strlen(buffer) == 1 && strchr("+-*/", buffer[0])) {
            *op = buffer[0];
            return 1;
        } else {
            printf("Invalid operator. Please use +, -, *, or /.\n");
        }
    }
}

int main() {
    double num1, num2, result;
    char operation;
    char choice[10];

    while (1) {
        if (!getDouble("Enter first number: ", &num1)) break;
        if (!getOperator(&operation)) break;
        if (!getDouble("Enter second number: ", &num2)) break;

        switch (operation) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/':
                if (num2 == 0) {
                    printf("Error: division by zero is undefined.\n");
                    continue;
                }
                result = num1 / num2;
                break;
        }

        printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);

        printf("Do you want to continue? (Y/N): ");
        if (!fgets(choice, sizeof(choice), stdin)) break;

        if (choice[0] == 'N' || choice[0] == 'n') {
            break;
        }
    }

    printf("Process terminated.\n");
    return 0;
}
