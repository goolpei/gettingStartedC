#include <stdio.h>
int main(){
    int arr[100];
    int num = 1;
    int i;
    int count = 0;

    while(num != 0){
        
        printf("\nEnter any number (enter '0' to stop): \n");
        scanf("%d", &num);
        arr[count] = num;
        count++;

        printf("The current list is: \n");
        for(i = 0; i < count; i++){
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}