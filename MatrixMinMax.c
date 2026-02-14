#include <stdio.h>
int main(){
    int matrix[4][4], rows = 4, columns = 4;
    
    
    for(int i = 0; i < rows; i++){
        
        for(int j = 0; j < columns; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    int min = matrix[0][0];
    int max = matrix[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] > max) max = matrix[i][j];
            if(matrix[i][j] < min) min = matrix[i][j];
            printf("[%3d] ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("Matrix max: %d\nMatrix min: %d", max, min);



    return 0;
}