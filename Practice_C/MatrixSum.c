#include <stdio.h>
int main(){

    int matrix[3][4], sumMatrix = 0, rows = 3, columns = 4;


    printf("Enter nums for matrix: ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
            sumMatrix += matrix[i][j];
        }
    }

    printf("\nMatrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("[%d] ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix contents: %d", sumMatrix);


    return 0;
}