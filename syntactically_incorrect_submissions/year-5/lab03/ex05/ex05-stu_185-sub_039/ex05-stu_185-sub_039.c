
#include <stdio.h>
int main(){
    char c;
    int estado = 0, keep = 0;
    while((c = getchar()) != EOF){
        if (keep){
            putchar(c);
            keep = 0;
        } else if (c == '"'){
            estado = !estado;
            if (!estado) putchar('\n');
        } else if (c == '\\') {
            keep = 1;
        } else if (estado) {
            putchar(c);
        }
    }
}
