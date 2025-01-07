
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main(){
    int c, estado = FORA;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            estado = FORA;
            putchar(c);
        }
        else if (estado == FORA && c == '0'){
            estado = DENTRO;
            while (c == '0'){
                c = getchar();
            }
            if (c == ' ' || c == '\n' || c == '\t'){
                putchar('0');
                estado = FORA;
            }
            putchar(c);
        }
        else{
            putchar(c);
        }
    }   
    return 0;
}