#include <stdio.h>
int main(){

    int matrix[3][3] = {
        {2, 3, 5},
        {6, 2, 3},
        {1, 0, 4}
    };

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}