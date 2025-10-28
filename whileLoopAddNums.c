#include <stdio.h>
int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    int i = 0, sum = 0;
    while(i < 5){
        sum += nums[i];
        i++;
    }
    printf("\nSum: %d\n", sum);
    printf("\nDone!\n");
    return 0;
}