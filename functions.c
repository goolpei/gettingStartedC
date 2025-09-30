#include <stdio.h>

void sayHello(){
    printf("Hello Nayeon (*≧ω≦)\n");
}

void greet(char name[]){
    printf("Hello, %s!\n", name);

}

int add(int a, int b){
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int add2(int a, int b){
    return a + b;
}

int main(){
    sayHello();
    greet("Nayeon");
    add(3, 10);
    int sum2 = add2(20,100);
    printf("Sum: %d\n", sum2);
    return 0;

}