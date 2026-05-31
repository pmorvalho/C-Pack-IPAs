

#include <stdio.h>


int main(){

    #define FORA 1
    #define DENTRO 0
    #define FALSO 2
    #define VERDADEIRO 3

    int c,estado=FORA,barra=FALSO;
    
    while((c=getchar())!=EOF){

        if (c=='"' && barra==FALSO && estado==DENTRO) {estado=FORA; printf("\n");}
        else if (c=='"'&& estado==FORA) {estado=DENTRO;}
        else if (c!='"' && c!='\\' && estado==DENTRO && barra==FALSO) { putchar(c);}
        else if (barra==VERDADEIRO) {putchar(c); barra=FALSO;}
        else if (c=='\\') {barra=VERDADEIRO;}
       }
return 0; }

        