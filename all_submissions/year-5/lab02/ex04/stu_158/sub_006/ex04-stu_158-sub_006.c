
#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    if (num2 < num1) {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }
    if (num3 < num2) {
        num2 = num2 ^ num3;
        num3 = num2 ^ num3;
        num2 = num2 ^ num3;
    }
    if (num2 < num1) {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }
    
    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}