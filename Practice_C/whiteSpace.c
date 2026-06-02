#include <stdio.h>
int main(){
int x;
char ch;
char name[100];

printf("Enter num: ");
scanf("%d", &x);     // user types: 5⏎
printf("You entered num: %d\n", x);

printf("Enter char: ");
scanf(" %c", &ch);    // ch becomes '\n' (newline leftover)
printf("You entered char: %c\n", ch);

printf("Enter first name: ");
scanf("%s", name);
printf("Name: %s\n", name);

 

printf("Enter full name: ");
scanf(" %[^\n]", name);
printf("Name: %s\n", name);


/*
printf("Enter char: ");
scanf(" %c", &ch);   // ch waits for actual input like 'a' 
*/
}