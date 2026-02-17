#include <stdio.h>
int main(){

    int temp;
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {9, 8, 7}
     };

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            if(matrix[i][j] > matrix[i][j + 1]){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j + 1] = matrix[i][j];
            }
        
            

        }
        
     }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
    }



    return 0;
}