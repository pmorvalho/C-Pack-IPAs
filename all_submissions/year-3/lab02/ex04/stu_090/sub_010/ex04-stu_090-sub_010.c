

#include <stdio.h>

int main(void) {
    
    int num1, num2, num3, carry;

    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
        carry = num1, num1 = num2, num2 = carry;
    if (num2 > num3)
        carry = num2, num2 = num3, num3 = carry;
    if (num1 > num2)
        carry = num1, num1 = num2, num2 = carry;  
    printf("%d %d %d\n", num1, num2, num3);
    return 0;       
}