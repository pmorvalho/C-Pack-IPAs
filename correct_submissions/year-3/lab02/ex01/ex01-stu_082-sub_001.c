

#include <stdio.h>

int main()
{
    int num1, num2, num3, maximo;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2) {
        maximo = num1;
    }
    else {
        maximo = num2;
    }
    if (num3 > maximo) {
       maximo = num3; 
    }
    printf("%d\n", maximo);

    return 0;
}