#include<stdio.h>
#define ESCAPE 1
#define NOESCAPE 0

#define FORA 0
#define DENTRO 1


int main(){
    int c;
    int estado = FORA;
    int simbolo = NOESCAPE;

    while ((c = getchar()) != EOF){
        if ((c == '"' && estado == FORA))
            estado = DENTRO;
        else if (c == '"' && estado == DENTRO && simbolo == NOESCAPE){
            estado = FORA;
            printf("\n");
        }

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
    }
    



return 0;
}
