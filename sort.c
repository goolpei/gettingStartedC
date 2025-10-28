#include <stdio.h>
int main(){
    int arr[5] = {20, 40, 50, 10, 30};
    int i = 0;
    int j, temp;

    while(i < 5){
        j = i + 1;
        while(j < 5){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
            j++;
        }
        i++;
    }

    printf("Sorted (ascending): ");
    i = 0;
    while(i < 5) printf("%d ",arr[i++]);

    return 0;
}
