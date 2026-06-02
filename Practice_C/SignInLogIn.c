#include <stdio.h>
#include <string.h>
int main(){

    char username[100], pass[100], enteruser[100], enterpass[100];
    
    printf("\nSIGN UP");
    printf("\nEnter username: ");
    scanf("%99s", username);
    printf("Enter password: ");
    scanf("%99s", pass);

    do{
        printf("\nLOG IN");
        printf("\nEnter username: ");
        scanf("%99s", enteruser);
        printf("Enter password: ");
        scanf("%99s", enterpass);
        
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
    return 0;
}