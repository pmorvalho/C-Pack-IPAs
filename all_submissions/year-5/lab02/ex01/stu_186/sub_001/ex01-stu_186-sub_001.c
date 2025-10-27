
#include <stdio.h>

int main () {
    int num1, num2, num3, maior;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3)
        maior = num1;
    else if (num2 >= num1 && num2 >= num3)
        maior = num2;
    else 
        maior = num3;

    printf("%d\n", maior);
    return 0;
}