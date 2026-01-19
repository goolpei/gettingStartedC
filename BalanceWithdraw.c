#include <stdio.h>
int main(){

    int balance = 1000;
    int withdraw, deposit;
    char choice;

    do{

        printf("\nATM");
        printf("\n1. Check Balance");
        printf("\n2. Withdraw");
        printf("\n3. Deposit");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("Balance: %d", balance);
            break;
        
        case '2':
            if(balance == 0){
                printf("\nNO BALANCE");
                break;
            }
            printf("Enter amount: ");

            if(scanf("%d", &withdraw) != 1){
                printf("Invalid input.");
                int c;
                while((c = getchar() != '\n' && c != EOF));
                break;
            }
            

            if(withdraw <= 0) {
                printf("\nInvalid withdraw.");
            } else if(withdraw > balance) {
                printf("\nWithdraw exceeds current balance.");
            } else if(withdraw <= balance){
                balance = balance - withdraw;
                printf("\nWithdrawn %d successfully", withdraw);
                printf("\nBalance left: %d", balance);
            }
            break;

        case '3':
            printf("Enter amount: ");

            if(scanf("%d", &deposit) != 1){
                printf("Invalid input.");
                int c;
                while((c = getchar() != '\n' && c != EOF));
                break;
            }
            

            if(deposit <= 0){
                printf("Invalid amount.");
            } else{
                balance += deposit;
                printf("Deposited successfully.");
            }
            break;

        case '4':
            printf("\nThank you for using.");
            break;

        default:
            printf("\nInvalid choice.");
            break;
        }

    } while(choice != '4');

    

    return 0;
}