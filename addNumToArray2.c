#include <stdio.h>
int main(){
    
    int arr[10] = {1, 2, 3, 4};
    int addNum = 5, index = 4;

    arr[index++] = addNum;


    for(int i = 0; i < index; i++) printf("%d ", arr[i]);

    return 0;

}