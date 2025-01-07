
#include <stdio.h>
int main(){
    int segundos, horas, minutos, segundos_restantes;
    scanf("%d",&segundos);
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;
    printf("%02d:%02d:%02d\n",horas,minutos,segundos_restantes)

}