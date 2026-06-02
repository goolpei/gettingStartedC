#include <stdio.h>
int main(){

    int num[5];

    printf("Enter five numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    printf("You entered: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }

    return 0;
}