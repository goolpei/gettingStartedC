#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int i = 4;
    while(i >= 0){
        printf("%d ", arr[i]);
        i--;
    }
    return 0;
}