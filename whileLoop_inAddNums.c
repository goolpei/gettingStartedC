#include <stdio.h>
int main(){
    int nums[5];
    int sum = 0;
    int i = 0;

    printf("Enter five numbers: ");
    while (i < 5){
        scanf("%d", &nums[i]);
        i++;
    }

    i = 0;
    while (i < 5){
        sum += nums[i];
        i++;
    }

    i = 0;
    while (i < 4){
    printf("%d + ", nums[i]);
    i++;
    }

    printf("%d = %d\n", nums[4], sum);
    return 0;
}