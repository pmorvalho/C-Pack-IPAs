
#include <stdio.h>

int main(){
    char c;
    int comecou = 0;
    int vem_especial = 0;

    while ((c = getchar()) != EOF && c != '\n'){
        if (c == '\"' && !vem_especial){
            if (comecou == 0){
                comecou = 1;
            } else {
                comecou = 0;
                putchar('\n');
            }
        } else if (comecou) {
            if (c == '\\'){
                if (!vem_especial)
                    vem_especial = 1;
                else{
                    putchar(c);
                    vem_especial = 0;                }
            } else {
                if (vem_especial)
                    vem_especial = 0;
                putchar(c);
                
                
            };
        };
    };

    return 0;
}