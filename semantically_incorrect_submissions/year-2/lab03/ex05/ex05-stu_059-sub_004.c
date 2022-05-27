#include<stdio.h>
#define ESCAPE 1
#define NOESCAPE 0

#define FORA 0
#define DENTRO 1


int main(){
    int c;
    int estado = FORA;
    int simbolo = NOESCAPE;



do{
    c = getchar();

    if ((c == '"' && estado == FORA))
            estado = DENTRO;
    else if (c == '"' && estado == DENTRO && simbolo == NOESCAPE)
        estado = FORA;

    if (estado == DENTRO && c != '\\' && c != '"'){
        printf("%c",c);
        simbolo = NOESCAPE;
    }
    else if ( estado == DENTRO && simbolo == ESCAPE){
        printf("%c",c);
        simbolo = NOESCAPE;
    }
    else if (estado == DENTRO && c == '\\')
        simbolo = ESCAPE;
   
} while (estado != FORA);

printf("\n");

return 0;
}
