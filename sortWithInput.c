#include <stdio.h>
int main(){
    int nums[5], i = 0, j, temp;
    
    
    printf("Enter five numbers: ");
    while(i < 5) scanf("%d", &nums[i++]);

    i = 0;
    while(i < 5){
        j = i + 1;
        while(j < 5){
            if(nums[j] < nums[i]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            j++;
        }
        i++;
    }

    printf("Sorted (ascending): ");
    i = 0;
    while(i < 5) printf("%d ", nums[i++]);


    return 0;
}