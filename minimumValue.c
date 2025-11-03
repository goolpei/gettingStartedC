#include <stdio.h>
int main(){

    int arr[] = {3, 1, 5, 9, 2};
    int min = arr[0];
    int n = 5;

    for(int i = 0; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
        
    printf("Minimum value: %d", min);
    


    return 0;
}