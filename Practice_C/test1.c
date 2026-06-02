#include <stdio.h>
int main(){

    int arr[5];
    int i = 0;

    printf("Enter five numbers: ");
    while(i < 5){
        scanf("%d", &arr[i]);
        i++;

    }

    printf("You entered: ");
    i = 0;
    while(i < 5){
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}