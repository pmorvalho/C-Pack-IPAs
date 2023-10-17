

#include <stdio.h>

int main() {

    int num1, num2, rest;
    
    scanf("%d%d", &num1, &num2);
    
    rest = num1 % num2;
    
    if (rest == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}