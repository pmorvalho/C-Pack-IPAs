

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int leLinha(char s[]) {
    int tam = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && tam <= 99) {
        s[tam] = c;  
        tam++;
    }

    s[tam] = '\0';
    return tam; 
}


int main(){
    char palavra[100];

    int tamanho = leLinha(palavra);
    
    for (int i=0; i<tamanho; i++){
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            palavra[i] = palavra[i] - ('a' - 'A'); 
        }
        putchar(palavra[i]);
    }

    return 0;    
}