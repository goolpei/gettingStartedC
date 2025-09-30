#include <stdio.h>

float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
 
  

}
int main(){

while (1)
{

    float num1, num2, result;
    char operation, choice;
    int ch;

    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
            printf("Invalid  input, please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        } else {
        while ((ch = getchar()) != '\n' && ch != EOF); 
        }

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    if(operation != '+' && operation != '-' && operation != '*' && operation != '/' ){
        printf("Please use a valid operation (+, -, *, /).\n");
        continue; 
    }

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1) {
            printf("Invalid  input, please enter a number.\n");
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        } else {
        while ((ch = getchar()) != '\n' && ch != EOF); 
        }

    if(operation == '+'){
        result = add(num1, num2);
    } else if(operation == '-'){
        result = subtract(num1, num2);
    } else if(operation == '*'){
        result = multiply(num1, num2);
    } else if(operation == '/'){

        if(num2 == 0){
            printf("%.2f %c %.2f = Undefined\n", num1, operation, num2);
            printf("Do you want to continue? (Y/N): ");
            scanf(" %c", &choice);
            if(choice != 'y' && choice != 'Y'){
            break;
            } else {continue;}
        } else {result = divide(num1, num2);}
        
    }

    printf("%.2f %c %.2f = %f\n", num1, operation, num2, result);

    
    printf("Do you want to continue? (Y/N): ");
    scanf(" %c", &choice);

    if(choice != 'y' && choice != 'Y'){
        break;
    }

    }
printf("Process terminated.\n");
return 0;

}