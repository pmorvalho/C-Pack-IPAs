

#include <stdio.h>

int main(){
    int c;
    
    int ja_vi_digito_valido = 0;
    int ja_imprimi = 0;
    int ultimo_foi_newline = 0;

    while ((c = getchar()) != EOF){   
        if (c == ' ' || c == '\n'){
            if (ja_imprimi == 0)    
                printf("0");    
            putchar(c); 
            
            ultimo_foi_newline = (c == '\n');
            ja_vi_digito_valido = 0;
            ja_imprimi = 0;
        }
        else if (c == '0'){
            if (ja_vi_digito_valido == 1)  
                putchar (c);
            }
        else{
            ja_vi_digito_valido = 1;
            ja_imprimi = 1; 
            putchar(c);
        }
    }
    if (!ultimo_foi_newline)
        printf("\n");     
}   

