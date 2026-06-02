#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int vowelCount = 0;
    char str[100];
    char strL[100];
    int i;
    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);
    
   
    for(i = 0; str[i] != '\0'; i++){
        strL[i] = tolower(str[i]);
    }
    str[i] = '\0';

    for(i = 0; strL[i] != '\0'; i++){
        if(strL[i] == 'a' || strL[i] == 'e' || strL[i] == 'i' || strL[i] == 'o' || strL[i] == 'u') vowelCount++;
    }

    printf("Vowel Count: %d", vowelCount);

    return 0;
}