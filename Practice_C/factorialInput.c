#include <stdio.h>
int main(){

    int num;
    int factorial = 1;

    printf("Enter a number(n!): ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    printf("%d! = %d", num, factorial);
    return 0;
}