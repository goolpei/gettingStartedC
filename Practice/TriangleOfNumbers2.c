#include <stdio.h>
int main(){
    int i = 1, j = 1, rows = 4, space = 1, count = 1;

    while(i <= rows){
        space = 1;
        while(space <= rows - i){
            printf(" ");
            space++;
        }
        j = 1;
        while(j <= i){
            printf("%d ", count);
            count++;
            j++;
        } 
        printf("\n");
        i++;
    }

    return 0;
}