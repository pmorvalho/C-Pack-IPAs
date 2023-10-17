

#include <stdio.h>

int main(void) {

    int num1, num2;

    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf ("%d\n%d\n", num2, num1);
    else if (num2 > num1)
        printf ("%d\n%d\n", num1, num2);
    else
        printf("os números são iguais");
    return 0;
}