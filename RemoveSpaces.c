#include <stdio.h>
int main(){
    char str[100];
    char result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while(str[i] != '\0'){ // \0 means empty or null
        if(str[i] != ' '){
            result[j] = str[i];
            j++;
        }
        i++;
    } 
    result[j] = '\0'; //end the string

    printf("String without spaces: %s\n", result);
    return 0;
}