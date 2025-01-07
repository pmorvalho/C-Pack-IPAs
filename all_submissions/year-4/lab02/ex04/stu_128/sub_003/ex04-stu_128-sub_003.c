
#include <stdio.h>
int main()
{
    int first, second, third, temporario;
    scanf("%d%d%d",&first,&second,&third);
    if (second < first)
    {
    temporario = first;
    first = second;
    second = temporario;
    }
    if (third < first)
    {
    temporario = first;
    first = third;
    third = temporario;
    }
    if (third < second)
    {
    temporario = second;
    second = third;
    third = temporario;
    }
    printf("%d %d %d\n",first,second,third);
    return 0;
}