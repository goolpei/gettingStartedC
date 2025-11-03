#include <stdio.h>
int main(){
    int nums = 0, sum = 0;
    while(1){
        printf("Enter number (enter 0 to stop): ");
        scanf("%d", &nums);
        sum += nums;
        if(nums == 0) break;
    }
    printf("Sum: %d", sum);
    return 0;
}