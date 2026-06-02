#include <stdio.h>
int main(){
    int i = 1;
    int j = 1;
    int space = 1;
    int rows = 9;

    while(i <= rows){ //loops 4 times
        space = 1;
        while(space <= rows - i){ //loops 3 times
            printf(" ");
            space++;
        }
        j = 1;
        while(j <= i){
            printf("%d ", i);
            j++;
        }
        printf("\n"); 


        i++;
    }

    return 0;
}