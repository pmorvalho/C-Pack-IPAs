
#include <stdio.h>

#define FORA_MENSAGEM 0
#define DENTRO_MENSAGEM 1
#define ESCAPE 2

int main(){
    int c, estado = FORA_MENSAGEM;
    
    while ((c = getchar()) != EOF) {

        if (estado == FORA_MENSAGEM) {
            if (c == '"') {
                estado = DENTRO_MENSAGEM;
            }
        }

        else if (estado == DENTRO_MENSAGEM) {
            if (c == '\\') {
                estado = ESCAPE;
            }
            else if (c == '"') {
                putchar('\n');
                estado = FORA_MENSAGEM;
            }
            else {
                putchar(c);
            }
        }
        else if (estado == ESCAPE) {
            putchar(c);
            estado = DENTRO_MENSAGEM;
        }
    }
}