#include <stdio.h>
int main() {
    int age;
    float gpa;
    char grade;
    char name[100];

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("Enter full name: ");
    scanf(" %[^\n]", name);

    printf("\n--- Output ---\n");
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}
