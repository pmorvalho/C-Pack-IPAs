
#include <stdio.h>

int main()
{
    int number1, number2;

    scanf("%d%d", &number1, &number2);

    if (number2 > number1) {
        printf("%d\n%d\n", number1, number2);
    } else {
        printf("%d\n%d\n", number2, number1);
    }


    return 0;
}

