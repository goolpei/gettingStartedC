#include <stdio.h>
int main(){
    int arr[100];
    int count = 0, cold = 0, warm = 0, hot = 0, invalid = 0;

    printf("Enter 10 temperatures: ");
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < 10; i++){
        if(arr[i] < 0 || arr[i] > 100) invalid++;
        else if(arr[i] < 20) cold++;
        else if(arr[i] >= 20 && arr[i] <= 30) warm++;
        else hot++;
    }

    printf("\nNumber of cold temperatures: %d", cold);
    printf("\nNumber of warm temperatures: %d", warm);
    printf("\nNumber of hot temperatures: %d", hot);
    printf("\nNumber of invalid temperatures: %d\n\n", invalid);


    return 0;
}