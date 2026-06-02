#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int arr_2[100];
   
    int i = 4;
    int j = 0;
    while(i >= 0){
        arr_2[j] = arr[i];
        j++;
        i--;
    }

    for(i = 0; i < 5; i++) printf("%d ", arr_2[i]);
    return 0;
}