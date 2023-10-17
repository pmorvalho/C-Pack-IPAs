
#include <stdio.h>
#define hora 3600;
#define minuto 60;
int main(){
    int tempo;
    int minutosr,segundosr,horar;
    scanf("%d", &tempo);
    segundosr=tempo%minuto;
    tempo=tempo-segundosr;
    minutosr=tempo%hora;
    tempo=tempo-minutosr;
    minutosr=minutosr/60;
    horar=tempo/hora;
    if(horar>10 && minutosr>10 && segundosr>10){
        printf("%d:%d:%d\n",horar,minutosr,segundosr);
    }
    else if (minutosr>10 && segundosr>10)
    {
        printf("0%d:%d:%d\n",horar,minutosr,segundosr);
    }
    else if (horar>10 && segundosr>10)
    {
        printf("%d:0%d:%d\n",horar,minutosr,segundosr);
    }
    else if (minutosr>10 && horar>10)
    {
        printf("%d:%d:0%d\n",horar,minutosr,segundosr);
    }
    else if (segundosr>10)
    {
        printf("0%d:0%d:%d\n",horar,minutosr,segundosr);
    }
    else if (horar>10 )
    {
        printf("%d:0%d:0%d\n",horar,minutosr,segundosr);
    }
    else if (minutosr>10 )
    {
        printf("0%d:%d:0%d\n",horar,minutosr,segundosr);
    }
    else{
        printf("0%d:0%d:0%d\n",horar,minutosr,segundosr);
    }
    return 0;
}