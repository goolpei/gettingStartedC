#include <stdio.h>
int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    int i = 0;
    int sum = 0;
    while(i < 5){
        sum = sum + nums[i];
        i++;
    }
    printf("%d\n", sum);
    return 0;
}