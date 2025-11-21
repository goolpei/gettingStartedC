#include <stdio.h>

void choice(){
    char choicen;
    printf("Do you want to continue? (Y/N): ");
    scanf("%c", choicen);
    if(choicen == 'N' || choicen == 'n');
    
}

int main(){

    while(1){
    choice();
    }

}