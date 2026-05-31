

#include <stdio.h>
#define TEMPO 60

int main ()
{
    int seg, min, horas, total;
    scanf("%d", &total);

    horas = total / (TEMPO*TEMPO);
    min = (total % (TEMPO*TEMPO)) / TEMPO;
    seg = total % TEMPO;

    printf("%02d:%02d:%02d\n", horas, min, seg);
    return 0;

}