
#include <stdio.h>

int main()
{
    int N, horas, min, s;

    scanf("%d", &N);
    horas = N / 3600;
    min = (N - (horas * 3600)) / 60;
    s = N - (horas * 3600) - (min * 60);
    printf("%02d:%02d:%02d", horas, min, s);

    return 0;
}