#include <stdio.h>
int main(){
    int arr[] = {0, -1, 3, 4, 1, -2, -3, -4, 1, 0};
    int negativesOnes = 0, ones = 0, zeroes = 0, change = 0, i = 0;

    printf("\nArray contents: [ ");
    while(i < 10){
        printf("%d ", arr[i]);
        i++;
    }
    printf("]\n");
    
    i = 0;
    while(i < 10){
        if(arr[i] > 0) {arr[i] = 0; zeroes++;}
        else if(arr[i] < 0) {arr[i] = 1; ones++;}
        else {arr[i] = -1; negativesOnes++;}
        i++;
    }

    change = zeroes + ones + negativesOnes;

    i = 0;
    printf("Changed array contents: [ ");
    while(i < 10){
        printf("%d ", arr[i]);
        i++;
    }
    printf("]");

    printf("\nTotal number of changes: %d\n", change);


    return 0;
}