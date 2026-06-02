#include <stdio.h>
int main(){
    int arr[] = {11, 54, 67, 24, 0, 12, 45, 8, 0, 10};
    int temp;
    
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted ascending: ");
    for(int i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}