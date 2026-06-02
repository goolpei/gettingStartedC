#include <stdio.h>
int main(){
    float num1, num2, num3, num4, result;
    char operation;

    printf("Enter operation (+. -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    printf("Enter fourth number: ");
    scanf("%f", &num4);
    

    switch (operation)
    {
    case '+':
        result = num1 + num2 + num3 + num4;
        printf("Result: %0.2f", result);
       
        break;
    case '-':
        result = num1 - num2 - num3 - num4;
        printf("Result: %0.2f", result);
        break;
    case '*':
        result = num1 * num2 * num3 * num4;
        printf("Result: %0.2f", result);
        break;
    case '/':
        if(num2 == 0 || num3 == 0 || num4 == 0){
           printf("Result is undefined."); 
           break;
        }
        result = num1 / num2 / num3 / num4;
        printf("Result: %0.2f", result);
        break;
    default:
    printf("Invalid input.");
        break;
        
    }

    
    

    

    return 0;
}