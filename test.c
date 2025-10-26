#include <stdio.h>
#include <string.h>
int main(){

    //printf("%s", "I love you" + 1 );

    //int num2 = 2;
    //printf("%s", num2 + "Hello");

    char num1[100] = "1";
    printf("%s%s\n", "Hellow", num1);

    strcat(num1, "Hello");
    printf("%s\n", num1);

    strcat("Hello", "world");


    return 0;
}