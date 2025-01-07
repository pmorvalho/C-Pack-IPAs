
#include <stdio.h>
#define DIVHORAS 3600
#define DIVMIN 60

int main(void){

    int horas,minutos,segundos;
    int n;
    int resto;

    scanf("%d",&n);

    horas = n / DIVHORAS;
    resto = n % DIVHORAS;
    minutos = resto / DIVMIN;
    segundos= resto % DIVMIN;


    
    printf("%2.2d:%2.2d:%2.2d",horas,minutos,segundos);


    return 0;
}