

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);    

    int horas = N/3600;
    int minutos = (N%3600)/60;
    int segundos = (N%3600)%60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}