

#include <stdio.h>

int main()
{
    int tempo = 0;
    int aux1 = 0, aux2 = 0;
    int hora=0, min=0, seg=0;

    scanf("%d", &tempo);
    aux1 = tempo;
    aux2 = tempo;

    while(aux1 >= 3600)
    {
        aux2 = aux2 % 3600;
        aux1 -= 3600;
        hora ++;
    }

    while(aux1 >= 60)
    {
        aux2 = aux2 % 60;
        aux1 -= 60;
        min ++;
    }

    seg = aux2;

    printf("%02d:%02d:%02d", hora, min, seg);
}