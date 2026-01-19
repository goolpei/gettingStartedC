#include <stdio.h>
int main(){
    int rows = 4;
    
    for(int i = 0; i < rows; i++){

        for(int space = 0; space < rows - i - 1; space++){
            printf(" ");
        }
        int value = 1;
        for(int j = 0; j <= i; j++){

            printf("%d ", value);
            value = value * (i - j) / (j + 1);   
        }
        


        printf("\n");
    }
    
    

    return 0;
}