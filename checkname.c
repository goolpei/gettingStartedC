#include <stdio.h>
int main(){
    char name[] = "mat";
    char ename[100];

    printf("Enter name:");
    fgets(ename, sizeof(ename), stdin);

    if (ename == name){
        printf("Hello %s", name);
    }


    return 0;
}