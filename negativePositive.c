#include <stdio.h>
int main(){

    int nums[10] = {2, -5, 11, 0, 0, -1, 4, 9, -2, 8};
    int i = 0, negative = 0, zero = 0, positive = 0;

    while(i < 10){
        if(nums[i] < 0){
            negative += 1;
        } else if(nums[i] == 0){
            zero += 1;
        } else if(nums[i] > 0){
            positive += 1;
        }
        i++;
    }

    printf("Negatives: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    printf("Positives: %d\n", positive);

    return 0;
}