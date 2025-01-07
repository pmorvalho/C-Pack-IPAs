

#include <stdio.h>

int main()
{
    int num, soma = 0, digs = 0;
    scanf("%d",&num);
    if (num == 0) digs = 1;
    while(num != 0)
    {
        soma = soma + (num % 10);
        digs++;
        num = num / 10;
    }
    printf("%d\n%d\n", digs, soma);
    return 0;
}