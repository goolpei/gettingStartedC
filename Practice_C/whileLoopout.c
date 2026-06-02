#include <stdio.h>
int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    int i = 4;
    while(i >= 0){
        printf("%d\n", nums[i]);
        i--;
    }
    return 0;
}