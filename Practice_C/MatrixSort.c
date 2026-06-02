#include <stdio.h>
int main(){

    int temp;
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {9, 8, 7}
    };

    int totalElements = 9;

    for(int i = 0; i < totalElements; i++){
        for(int j = i + 1; j < totalElements; j++){

            int r1 = i / 3, c1 = i % 3;
            int r2 = j / 3, c2 = j % 3;

            if(matrix[r1][c1] > matrix[r2][c2]){
                temp = matrix[r1][c1];
                matrix[r1][c1] = matrix[r2][c2];
                matrix[r2][c2] = temp;
            }

        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


 


    return 0;
}