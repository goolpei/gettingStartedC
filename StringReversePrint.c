#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];


    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int strLength = strlen(str);

    for(int i = strLength - 1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}