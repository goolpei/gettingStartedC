#include <stdio.h>
#include <string.h>
int main(){
    int choice, choice_2;
    char username[100], password[100];
    char enterUsername[100], enterPassword[100];

    printf("\n--WELCOME--");

    do{

        
        printf("\n1. Login");
        printf("\n2. Signin");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch (choice)
        {
        case 1:

            do{

            printf("Enter username: ");
            fgets(enterUsername, sizeof(enterUsername), stdin);
            enterUsername[strcspn(enterUsername, " \n")] = '\0';
            printf("Enter password: ");
            fgets(enterPassword, sizeof(enterPassword), stdin);
            enterPassword[strcspn(enterPassword, " \n")] = '\0';

            if(strcmp(enterUsername, username) != 0 && strcmp(enterPassword, password) != 0){
                printf("\nWrong username and password!\n");
            } else if(strcmp(enterUsername, username) != 0){
                printf("\nWrong username!\n");
            } else if(strcmp(enterPassword, password) != 0){
                printf("\nWrong password!\n");
            }

            } while(strcmp(enterUsername, username) != 0 && strcmp(enterPassword, password) != 0);
            


            do{

            printf("\nLogin successfully!");
            printf("\nHi %s!", username);
            printf("\n1. Profile");
            printf("\n2. Settings");
            printf("\n3. Back");
            scanf("%d", choice_2);

            switch (choice_2)
            {
            case 1:
                printf("\nYour profile");
                printf("\nName: %s", username);
                printf("\nBio: ");
                break;
            
            default:
                break;
            }


            }while(choice_2 != 3);

            

            break;

        case 2:
            printf("Enter username: ");
            fgets(username, sizeof(username), stdin);
            username[strcspn(username, " \n")] = '\0';
            printf("Enter password: ");
            fgets(password, sizeof(password), stdin);
            password[strcspn(password, " \n")] = '\0';

            printf("\nAccount created!");
            printf("\nGo to login.");
            break;    
        
        default:
            break;
        }

    }while(choice != 3);

    printf("Program terminated.");

   



    return 0;
}