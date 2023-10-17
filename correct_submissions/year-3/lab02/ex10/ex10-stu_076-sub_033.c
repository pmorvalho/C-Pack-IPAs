
#include <stdio.h>

int main()
{
    int num, dig = 0, soma = 0;

    scanf("%d", &num);

    while (num > 0)
    {
        dig++;
        soma += num % 10;
        num = num / 10;
    }

    printf("%d\n%d\n", dig, soma);

    return 0;
}