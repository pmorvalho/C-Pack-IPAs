


#include <stdio.h>  
int main(){
    int num,horas,minutos,segundos, resto;
    scanf("%d",&num);
    horas = num/3600;
    resto = num % 3600;
    minutos = resto/60;
    segundos = resto % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}

