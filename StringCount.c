#include <stdio.h>
int main(){
    char str[] = "I love Nayeon!";
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count += 1;
        i++;
    }

    printf("Str count: %d", count);
    return 0;
}