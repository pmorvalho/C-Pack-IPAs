
#include <stdio.h>

#define SEGUNDOS_NUMA_HORA 3600
#define SEGUNDOS_NUM_MINUTO 60

int main()
{
    int N, horas = 0, minutos = 0;

    scanf("%d", &N);

    if(N >= SEGUNDOS_NUMA_HORA)
    {
       horas += N / SEGUNDOS_NUMA_HORA;
       N = N % horas;
    }



    if(N >= SEGUNDOS_NUM_MINUTO)
    {
        minutos += N / SEGUNDOS_NUM_MINUTO;
        N = N % minutos;
    }


    printf("%02d:%02d:%02d\n", horas, minutos, N);

    return 0;
}