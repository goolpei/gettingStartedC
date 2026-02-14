#include <stdio.h>
int main(){

    int rows = 2;
    int columns = 3;
    int matrix[2][3] = {
        {1, 9, 100},
        {4, 5, 8}
    };
    int matrixMax = matrix[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] > matrixMax) matrixMax = matrix[i][j];
        }
    }

    printf("Largest Element: %d", matrixMax);

    return 0;
}