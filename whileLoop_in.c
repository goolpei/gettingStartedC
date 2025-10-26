#include <stdio.h>
int main(){
    int num[5];
    int i = 0;
    printf("Enter five numbers: ");
    while(i < 5){
        scanf("%d", &num[i]);
        i++;
    }
    i = 0;
    while(i < 5){
        printf("%d ", num[i]);
        i++;
    }
    return 0;
}