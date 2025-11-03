#include <stdio.h>




int main(){

    float side;
    float area;

    printf("Enter length of sides (square): ");
    scanf("%f", &side);

    area = side * side;

    printf("Area: %f", area);

    // s * s

    return 0;
}