
#include<stdio.h>
int main(){
    int n, segundos, minutos, horas;
    scanf("%d",&n);
     

    horas = n/3600;
    minutos = (n-horas*3600)/60;
    segundos = (n-horas*3600-minutos*60);

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}