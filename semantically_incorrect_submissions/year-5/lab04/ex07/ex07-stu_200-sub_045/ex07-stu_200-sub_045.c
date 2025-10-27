
#include <stdio.h>
#define STRMAX 80

int leLinha(char s[]){
    char letra;
    int cont = 0;
    scanf("%c",&letra);
    while (letra != '\n' && letra != '\0' && letra != EOF && cont<STRMAX){
        s[cont]= letra;
        scanf("%c",&letra);
        cont++;
    }
    return cont;
}
void apagaCaracter(char s[], char c){
    int cont = 0,passo = 0;
    char letra;
    letra = s[0];
    while (letra != '\n'){
        while (letra == c){
            passo++;
            letra = s[cont+passo];
        }
        s[cont] = s[cont+passo];
        cont++;
    }
    s[cont] = '\0'; 
}

int main(){
    char s[STRMAX],c;
    leLinha(s);
    scanf("%c",&c);
    apagaCaracter(s,c);
    printf("%s",s);
    return 0;
}