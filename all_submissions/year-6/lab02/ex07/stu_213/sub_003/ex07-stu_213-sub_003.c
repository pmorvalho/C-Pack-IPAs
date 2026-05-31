

#include <stdio.h>

int main()
{
    int contador = 0;
    long num, i;
    
    scanf("%ld", &num);

    for (i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
            contador ++;
    }
    printf("%d\n", contador);
    return 0;
}