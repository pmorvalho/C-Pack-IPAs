
#include <stdio.h>
#define STRMAX 80
int leLinha(char s[]){
    char letra;
    int cont = 1;
    scanf("%c",&letra);
    s[0] = letra;
    while (letra != '\n' && letra != EOF){
        scanf("%c",&letra);
        s[cont]= letra;
        cont++;
    }
    s[cont] = '\0';
    return cont;
}

void maiusculas(char s[]){
    int cont = 0;
    char letra;
    letra = s[cont];
    while (letra != '\n'){
        if (letra >= 'a' && letra <= 'z')
            s[cont] = letra-32;
        ++cont;
        letra = s[cont];
    }
}

int main(){
    char s[STRMAX];
    leLinha(s);
    maiusculas(s);
    printf("%s",s);
    return 0;
}