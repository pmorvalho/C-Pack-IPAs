

#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define SEC 2

int main() {
    int c, estado = FORA;

    while ((c=getchar())!=EOF) {
        if (estado == DENTRO){
            if (c== '\\')
                estado = SEC;
            else if (c=='"') {
                estado = FORA;
                printf("\n");
            }
                
            else 
                putchar(c);    
        } 

        else if (estado == FORA) {
            if (c == '"')
                estado = DENTRO;

        }

        else if (estado == SEC) {
            if (c=='\\') {
                putchar(c);
                estado = DENTRO;
            }
                
            if (c=='"') {
                putchar(c);
                estado= DENTRO;
            }
        }
    }
    return 0;
}
