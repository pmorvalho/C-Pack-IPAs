
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
    int cont = 1,passo = 0;
    char letra;
    letra = s[0];
    if (letra == c)
        s[0] = s[1];
    while (letra != '\n'){
        letra = s[cont+passo];
        if (letra == c){
            passo++;
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