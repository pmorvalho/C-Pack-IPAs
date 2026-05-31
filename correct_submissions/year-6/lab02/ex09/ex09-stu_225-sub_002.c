
#include <stdio.h>
int main(){
    int N,segundos,minutos,horas;
    scanf("%d",&N);
    horas = N / 3600;
    N %= 3600;
    minutos = N / 60;
    segundos = N % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}