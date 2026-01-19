#include <stdio.h>
#include <string.h>
int main(){

    char username[100], pass[100], enteruser[100], enterpass[100];
    int choice;
    
    do{
        printf("\n1. Sign up\n");
        printf("2. Log in\n");
        printf("3. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nSIGN UP");
            printf("\nEnter username: ");
            scanf("%s", username);
            printf("Enter password: ");
            scanf("%s", pass);
            break;
        case 2:

            do{
                printf("\nLOG IN");
                printf("\nEnter username: ");
                scanf("%s", enteruser);
                printf("Enter password: ");
                scanf("%s", enterpass);

                if (strcmp(enteruser, username) != 0 && strcmp(enterpass, pass) != 0) {
                    printf("Wrong username and password.\n");
                    printf("Try again (*/ω＼*)\n");
                } else if(strcmp(enteruser, username) != 0){
                    printf("Wrong username.\n");
                    printf("Try again (*/ω＼*)\n");
                } else if(strcmp(enterpass, pass) != 0){
                    printf("Wrong password.\n");
                    printf("Try again (*/ω＼*)\n");
                } 
            } while(strcmp(enteruser, username) != 0 || strcmp(enterpass, pass) != 0);
            printf("Log in successful.\n");
            break;

        default:
            break;
        }

        
        
        
        
    } while(choice != 3);
    
    printf("Program terminated.\n");
    return 0;
}