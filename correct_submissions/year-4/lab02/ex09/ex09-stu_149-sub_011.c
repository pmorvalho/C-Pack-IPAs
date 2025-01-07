
#include <stdio.h>

int main() {
    int segundos,horas,minutos;

    scanf("%d", &segundos);
    horas=segundos/3600;
    segundos-=horas*3600;
    minutos=segundos/60;
    segundos-=minutos*60;
    
    printf("%02d:%02d:%02d\n",horas,minutos,segundos);
    return 0;
}