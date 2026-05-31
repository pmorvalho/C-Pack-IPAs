

#include <stdio.h>

int main(){
    int c;
    
    int ja_vi_digito_valido = 0;
    int ja_imprimi = 0;
    while ((c = getchar()) != EOF){   
        if (c == ' ' || c == '\n'){
            if (ja_imprimi == 0)    
                printf("0");    
            putchar(c); 
            
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
    printf("\n");     
}   

