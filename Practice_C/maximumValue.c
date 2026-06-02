#include <stdio.h>
int main(){

    int arr[] = {3, 5, 6, 100, 0};
    int max = arr[0];

    for(int i = 0; i < 5; i++) if(arr[i] > max) max = arr[i];

    printf("Maximum value: %d\n", max);
    return 0;
}