
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}DATE;
typedef struct{
    int hora;
    int minuto;
}TIME;

void elapsedTime(DATE data, TIME hora) {
    int minutosReturn;
    minutosReturn= hora.minuto + 60*hora.hora + (data.ano-2022)*525600 + (data.mes-01)*43829 + (data.dia-01)*1440;
    printf("%d\n",minutosReturn);
}

int main() {
    DATE data;
    TIME hora;
    scanf("%d-%d-%d %d:%d",&data.dia ,&data.mes, &data.ano, &hora.hora, &hora.minuto);
    elapsedTime(data,hora);
    return 0;
}