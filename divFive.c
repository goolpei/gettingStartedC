#include <stdio.h>
int main(){

    int num;
    char choice;

    while(1){

        printf("Enter a number: ");
        scanf("%d", &num);
        

        if(num % 2 == 0){
            printf("Number is even.\n");
        } else {
            printf("Number is odd\n");
        }

        printf("Do you wish to continue (Y/N)?: ");
        scanf(" %c", &choice);
        if (choice == 'Y'){ 
            continue;
        } else {
            
        }

    }

    printf("Thank you for using.\n");

    return 0;
}