
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
    return cont;
}

void maiusculas(char s[]){
    int cont = 1;
    char letra;
    letra = s[0];
    if (letra >= 'a' || letra <= 'z')
        s[0] = letra-32;
    while (letra != '\n'){
        letra = s[cont];
        if (letra >= 'a' && letra <= 'z')
            s[cont] = letra-32;
        cont++;
    }
}

int main(){
    char s[STRMAX];
    leLinha(s);
    maiusculas(s);
    printf("%s",s);
    return 0;
}