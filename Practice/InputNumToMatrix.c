#include <stdio.h>
int main(){

    int matrix[3][3];


    printf("Enter 9 numbers to put inside matrix: ");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d] ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}