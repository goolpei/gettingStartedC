#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "I love Nayeon!";
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    str[strcspn(str, "\n")] = '\0';

    while(left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}