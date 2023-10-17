
#include <stdio.h>

int main()
{
    int number1, number2;

    scanf("%d%d", &number1, &number2);

    if (number1 % number2 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
}