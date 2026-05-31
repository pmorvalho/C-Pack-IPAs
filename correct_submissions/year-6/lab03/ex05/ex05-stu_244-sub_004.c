
#include <stdio.h>
#define DENTRO 0
#define FORA 1

int main() {
    int c, estado = FORA;
    c = getchar();
    while (c!=EOF){
        if (estado == FORA){
            if (c == '"')
                estado = DENTRO;
        }
        else if (estado == DENTRO) {
            if (c =='"'){
                estado = FORA;
                putchar('\n');
            }
            else if (c!='\\')
                putchar(c);
            else {
                c = getchar();
                putchar(c);
            }
        }
        c = getchar();  
    }
    return 0;
}