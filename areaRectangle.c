#include <stdio.h>
int main(){
    int length, width, area;
    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    printf("Area: %d", area);
    return 0;

}