#include <stdio.h>

void choice(){
    char choicen;
    printf("Do you want to continue? (Y/N): ");
    scanf("%c", choicen);
}

int main(){
    choice();
}