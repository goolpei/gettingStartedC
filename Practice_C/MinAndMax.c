#include <stdio.h>
int main(){
    int arr[] = {4, 3, 2, 5, 6, 7, 8, 9, 0, 1};
    int min = arr[0], max = arr[0];
    int i = 0;

    while(i < 10){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
        i++;
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}