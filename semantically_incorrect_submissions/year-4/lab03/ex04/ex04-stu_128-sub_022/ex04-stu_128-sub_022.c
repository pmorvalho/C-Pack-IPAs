
#include <stdio.h>

int main()
{
    char c;
    int temp;
    int acumulado = 0;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ') 
        {
            printf("%d ", acumulado);
            acumulado = 0;
        } 
        else 
        {
            temp = c - '0';
            acumulado = acumulado * 10 + temp;
        }
    }
    printf("%d\n", acumulado);
    return 0;
}