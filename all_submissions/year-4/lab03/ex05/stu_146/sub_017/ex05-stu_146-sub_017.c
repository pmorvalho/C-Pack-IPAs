

#include <stdio.h>

int main() {

    enum states{DENTRO = 1, FORA = 0};
    int c, estado = FORA;

    while((c = getchar()) != EOF) {
        if(c == '\\') { 
            c = getchar();
            c = putchar(c);
        }
        else {
            if(c == '"') estado = !estado; 
            else if(estado == DENTRO) { 
                putchar(c);
                }
            else putchar('\n'); 
        }
    }
    return 0;
}
