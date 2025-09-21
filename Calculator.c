#include <stdio.h>
int main(){

    
    double num1, num2, result;
    char operation;
    char choice;
    int ch;

    while (1) {

        printf("Enter first number: ");

        if (scanf("%lf", &num1) != 1) {
            printf("Invalid  input, please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        } else {
        while ((ch = getchar()) != '\n' && ch != EOF); 
        }

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operation);

        printf("Enter second number: ");

        if (scanf("%lf", &num2) != 1) {
            printf("Invalid  input, please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        } else {
        while ((ch = getchar()) != '\n' && ch != EOF); 
        }
        
        result = 0;

        if ( operation == '+') {
            result = num1 + num2;
        } else if ( operation == '-') {
            result = num1 - num2;
        } else if ( operation == '*') {
            result = num1 * num2;
        } else if ( operation == '/') {
            if ( num2 == 0 ) {
                printf("%.2f %c %.2f = undefined\n", num1, operation, num2  );
                continue;
            } else {
                result = num1 / num2;
            }
        } else { 
            printf("Please use a valid operator (+, -, *, /).\n");
            continue;
        }

        printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);

        printf("Do u want to continue? (Y/N): ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y'){
            continue;
        } else {
            break;
        }
        
        
    }
    printf("Process terminated.\n");
    return 0;

}