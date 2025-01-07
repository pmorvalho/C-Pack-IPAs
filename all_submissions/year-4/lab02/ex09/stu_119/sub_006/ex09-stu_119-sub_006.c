
#include <stdio.h> 

int main() {
    int tempo,horas,minutos,segundos;
    scanf("%d",tempo);
    if (tempo/(60*24)>1)
    {
        horas = (tempo/(60*24));
        tempo = tempo - horas*(60*24);
    }
    if ((tempo/60)>1)
    {
        horas = (tempo/60);
        tempo = tempo - horas*(60*24);
    }

    
    
    return 0;
}