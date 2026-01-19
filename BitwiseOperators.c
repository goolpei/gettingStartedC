#include <stdio.h>
int main(){
    
    int a = 10; //1010
    int b = 12; //1100

    int c = 100;


    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("a & b = %d\n", a & b); // AND 1010 & 1100 = 1000 (8)
    printf("a | b = %d\n", a | b); // OR 1010 | 1100 = 1110 (14)
    printf("a ^ b = %d\n", a ^ b); // XOR 1010 ^ 1100 = 0110 (6)
    printf("~a = %d\n", ~a); // NOT ~1010 = 11111111 11111111 11111111 11110101 or (-11)
                            // formula: ~x = -(x + 1)
                            // ex. ~10 = -(10 + 1)
                            //     ~10 = -11
    printf("~b = %d\n", ~b);
    printf("a << 1 = %d\n", a << 1); // Left shift (multiplied by 2^n times)
    printf("a << 2 = %d\n", a << 2);
    printf("a << 3 = %d\n", a << 3);

    printf("\nc = %d\n", c);
    printf("c >> 1 = %d\n", c >> 1); // Right shift (divided by 2^n times)
    printf("c >> 2 = %d\n", c >> 2);
    printf("c >> 3 = %d\n", c >> 3);
    printf("c >> 4 = %d (No decimals)\n", c >> 4);

    // Bitwise operators (& | ^ ~ << >>) work on bits of integers only.
    // Integers represent whole numbers
    // There is no place for fractions
    // Shifting bits never creates decimals
    

    return 0;
}