#include <stdio.h>
int main(){

    int matrix[3][3] = {
        {2, 3, 5},
        {6, 2, 3},
        {1, 0, 4}
    };
    //printf("%d", matrix[2][2]);


    for(int i = 0; i < 3; i++){
        printf("%d ", matrix[0][i]);
    }

    printf("\n\n");

    for(int j = 0; j < 3; j++){
        printf("%d\n", matrix[j][0]);
    }

    printf("\n\n");

    for(int j = 0; j < 3; j++){

        for(int x = 0; x < j; x++){
            printf("  ");
        }
        printf("%d\n", matrix[j][j]);
    }

    /*  
    
    x < j
    j = 0, x = 0, print: no space, exit
    j = 1, x = 0, print: 1 space, x = 1, print: no space, exit
    j = 2, x = 0, print: 1 space, x = 1, print: 1 space, x = 2, print: no space, exit

    line 1: no space
    line 2: 1 space
    line 3: 2 space
    
    
    
    */  

    return 0;
}