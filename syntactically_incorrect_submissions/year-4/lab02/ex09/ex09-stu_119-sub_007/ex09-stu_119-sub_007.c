
#include <stdio.h> 

int main() {
    int horas,minutos,segundos;
    scanf("%d",segundos);

    if (segundos>=60)
    {
        minutos= segundos / 60;
        segundos = segundos%60;
    }
    if (minutos>=60)
    {
        horas = minutos / 60;
        minutos = minutos%60;
    }
    
    printf("%02d:%02d:%02d\n",horas, minutos, segundos);
    return 0;
}