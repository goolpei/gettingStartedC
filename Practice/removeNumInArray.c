#include <stdio.h>
int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int arrSize = 5;
    int removeIndex = 2;


    
    
    for(int i = removeIndex; i < arrSize - 1; i++){
        arr[i] = arr[i + 1];
    }

    arrSize--;

    for(int i = 0; i < arrSize; i++) printf("%d ", arr[i]);

    return 0;
}