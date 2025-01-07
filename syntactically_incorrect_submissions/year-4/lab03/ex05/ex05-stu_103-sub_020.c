
#include <stdio.h>

#define Fora 1
#define Dentro 0
void main(){
    int c;
    int estado=Fora;
    while ((c=getchar())!=EOF){
        if (estado ==Fora && c=='"'){
            estado=Dentro;
            continue;
        }
        else if(estado== Dentro && c !='"') {
            putchar(c);
        }
        else if (estado==Dentro && c=='"'){
            estado == Fora;
            printf("\n");
        }
}
return 0;
}
