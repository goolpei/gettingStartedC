#include <stdio.h>
int main(){
    int arr[5];
    


    printf("Enter 5 numbers for array: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int sumArr = arr[0], minArr = arr[0], maxArr = arr[0];

    for(int i = 1; i < 5; i++){
        sumArr += arr[i];
        if(arr[i] < minArr) minArr = arr[i];
        if(arr[i] > maxArr) maxArr = arr[i];
    }

    printf("Sum: %d\nMax Number: %d\nMin Number: %d", sumArr, maxArr, minArr);
    

    return 0;
}