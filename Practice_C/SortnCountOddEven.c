#include <stdio.h>
int main(){
    int arr[100];
    int i = 0, j = 0, temp, odd = 0, even = 0;


    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } 

    

    printf("Array contents: [ ");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("]");

    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            even++;
            printf("\n%d is even", arr[i]);
        } else {
            odd++;
            printf("\n%d is odd", arr[i]);
        }
    }

    printf("\nNumber of odd numbers: %d", odd);
    printf("\nNumber of even numbers: %d", even);

    

    return 0;
}