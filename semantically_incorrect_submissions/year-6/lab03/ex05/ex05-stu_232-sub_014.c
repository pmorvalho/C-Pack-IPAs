

#include <stdio.h>



int main(){
    int estado = -1;   
    int c;
    int paragrafo = 0;
    int barra = 0;

    while ((c = getchar()) != EOF){
        if (c == '"' && barra == 0){
            estado = -estado;
            paragrafo = 0;
        }
        else if (c == '\\' && barra == 0){
            barra = 1;
        }
        else if (estado == 1 && barra == 0){
            printf("%c", c);
        }
        else if (estado == -1 && paragrafo == 0){
            paragrafo = 1;
            printf("\n");
        }
        else if (barra == 1){
            printf("%c", c);
            barra = 0;
        }   
    }

    return 0;
}