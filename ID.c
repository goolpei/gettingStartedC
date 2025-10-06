#include <stdio.h>
int main(){
    char name[100];
    char school[100];
    char course[100];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter school: ");
    fgets(school, sizeof(school), stdin);
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    printf("-----I.D-----\n");
    printf("Name: %s", name);
    printf("School: %s", school);
    printf("Course: %s", course);

    return 0;
}