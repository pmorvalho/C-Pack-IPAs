#include <stdio.h>

int main()
{
    int N,horas,min,seg;
    scanf("%d",&N);

    horas = N / 3600;
    N = N % 3600;
    min = N / 60;
    seg = N % 60;
    
    printf("%02d:%02d:%02d\n",horas,min,seg);
    
    return 0;
}