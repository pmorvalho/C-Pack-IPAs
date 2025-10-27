
#include <stdio.h>

int main()
{
    int n, horas, minutos,restominutos , resto;
    scanf("%d",&n);
    horas = n/3600;
    restominutos = n%3600;
    minutos = restominutos/60;
    resto = restominutos-(minutos*60);
    printf("%.2d:%.2d:%.2d\n",horas,minutos,resto);
    return 0;
}