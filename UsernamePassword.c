#include <stdio.h>
#include <string.h>
int main(){

    char username[] = "admin";
    char password[] = "superpass1";
    
    char enteruser[100];
    char enterpass[100];

    do{

        

        printf("\nEnter username: ");
        scanf("%99s", enteruser);

        printf("Enter password: ");
        scanf("%99s", enterpass);

        if (strcmp(enteruser, username) != 0 && strcmp(enterpass, password) != 0) {
            printf("Wrong username and password.\n");
            printf("Try again (*/ω＼*)\n");
        } else if(strcmp(enteruser, username) != 0){
            printf("Wrong username.\n");
            printf("Try again (*/ω＼*)\n");
        } else if(strcmp(enterpass, password) != 0){
            printf("Wrong password.\n");
            printf("Try again (*/ω＼*)\n");
        } 
        
    } while(strcmp(enteruser, username) != 0 || strcmp(enterpass, password) != 0);

    printf("Hello user! (*^▽^*)\n");

    return 0;
}