#include <stdio.h>
int main(){
    int arr[100];
    int i = 0, j = 0;
    int ch;
  

    while(1){

        printf("\nEnter number to add to array (Enter 'x' to stop): ");
        if (scanf("%d", &arr[j]) != 1) break;
        j++;

        i = 0;
        printf("Array content: [ ");
        while(i < j){
            printf("%d ", arr[i]);
            i++;
        }
        printf("] ");

    }

    printf("Program terminated.");
    
    
        
    return 0;
}