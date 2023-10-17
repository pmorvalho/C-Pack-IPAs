
#include <stdio.h>

int main(){
    int N ; 
    int minutos , horas, segundos, resto;

    scanf("%d", &N);
    horas = N /3600;
    resto = (N%3600);
    minutos = (resto/60);
    segundos = (resto%60);    

    printf ( "%02d:%02d:%02d\n", horas, minutos, segundos);

return 0 ;
}
