
#include <stdio.h>

int main(){
    int N ; 
    float minutos , horas, segundos, resto;

    scanf("%d", &N);
    horas = N /3600;
    resto = (N%3600);
    minutos = (resto/60);
    segundos = (resto%60);

    printf ( "%d:%d:%d", horas, minutos, segundos);









return 0 ;
}