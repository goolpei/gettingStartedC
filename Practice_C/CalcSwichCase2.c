#include <stdio.h>
int main(){
    float a, b;
    char op;

    printf("\n(❁´◡`❁) Calculator (*/ω＼*)");
    printf("\nEnter '+' for Addition");
    printf("\nEnter '-' for Subtraction");
    printf("\nEnter '*' for Multiplication");
    printf("\nEnter '/' for Division\n");

    printf("Operation: ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op)
    {
    case '+':
        printf("%0.2f %c %0.2f = %0.2f\n", a, op, b, a + b);
        break;
    case '-':
        printf("%0.2f %c %0.2f = %0.2f\n", a, op, b, a - b);
        break;
    case '*':
        printf("%0.2f %c %0.2f = %0.2f\n", a, op, b, a * b);
        break;
    case '/':
        if(b == 0){
            printf("%0.2f %c %0.2f = Undefined\n", a, op, b);
        }
        printf("%0.2f %c %0.2f = %0.2f\n", a, op, b, a / b);
        break;
    
    default:
        printf("Invalid operator.");
        break;
    }


    return 0;
}