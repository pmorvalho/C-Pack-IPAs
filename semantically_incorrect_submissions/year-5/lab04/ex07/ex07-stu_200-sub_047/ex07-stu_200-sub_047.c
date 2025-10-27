
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
void apagaCaracter(char s[], char c){
    int cont = 0,passo = 0;
    char letra;
    letra = s[cont+passo];
    while (letra != '\n' && letra != EOF && cont+passo<STRMAX){
        while (letra == c){
            ++passo;
            letra = s[cont+passo];
        }
        s[cont] = letra;
        ++cont;
        letra = s[cont+passo];
    }
    s[cont] = '\0';
}

int main(){
    char s[STRMAX],c;
    leLinha(s);
    scanf("%c",&c);
    apagaCaracter(s,c);
    printf("%s\n",s);
    return 0;
}