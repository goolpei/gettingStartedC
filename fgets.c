#include <stdio.h>
int main(){

    char any[100];
    char choice;
 
    while(1){
    printf("Enter anything: ");
    fgets(any, sizeof(any), stdin);
    
    printf("You entered: %s", any);

    printf("Do you u want to continue (y/n)?: ");
    scanf("%c", &choice);
    if(choice == 'n' || choice == 'N') break;

    }

    printf("Session terminated.");


    return 0;
}