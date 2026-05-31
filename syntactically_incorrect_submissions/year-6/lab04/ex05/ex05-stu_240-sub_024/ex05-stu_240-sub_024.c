
#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int c, i = 0;
    while ((c = getchar()) != EOF && c != '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main(){
    char linha[MAX];
    int caracteres_lidos;
    
    caracteres_lidos = leLinha(linha);

    if (caracteres_lidos > 0){
        printf("%d\n", linha);
    }

    return 0;
}