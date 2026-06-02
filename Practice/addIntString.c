#include <stdio.h>
int main(){
    int num;
    char letter;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter letter: ");
    scanf(" %c", &letter);

    printf("%d%c", num, letter);


    return 0;
}