#include <stdio.h>
int main(){

    int arr[] = {1, 2, 3, 4, 5, 5, 6, 1, 5, 1};
    int i = 0, count_five = 0;

    while(i < 10){
        if(arr[i] == 5) count_five++;
        i++;
    }

    printf("Number of Fives: %d\n", count_five);


    return 0;
}