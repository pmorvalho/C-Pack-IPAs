
#include <stdio.h>

int main(){
    char c;
    int comecou = 0;
    int vem_especial = 0;

    while ((c = getchar()) != EOF || c != '\n'){
        if (c == '\"'){
            if (comecou == 0){
                comecou = 1;
            } else {
                comecou = 0;
                putchar(' ');
            }
        } else if (comecou) {
            if (c == '\\' && vem_especial != 0){
                vem_especial = 1;
            } else if (vem_especial){
                vem_especial == 0;
                putchar(c);
            } else if (('a' <= c <= 'z') || ('A' <= c <= 'Z') || ('0' <= c <= '9')){
                putchar(c);
            };
        };
    };

    printf("\n");

    return 0;
}