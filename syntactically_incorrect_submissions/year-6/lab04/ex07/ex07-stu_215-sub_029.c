
#include <stdio.h>
#include <string.h>
#define MAX 80


void apagaCaracter(char s[], char c){
    int i=0,j, tamanho = strlen(s);
    while (s[i] != '\0')
    
        if (s[i]==c){
            for (j= i+1; j< tamanho; j++)
                s[j]=s[j+1]; 
        }
    }

int main(){
    char linha [MAX], c;
    fgets (linha,MAX, stdin);
    scanf("%c", &c);
    apagaCaracter (linha, c);
    printf ("%s", linha);
    return 0;
}
//TPC: RESOLVER ISTO DE MODO A OBTER UMA SOLUÇÃO LINEAR NO PIOR CASO;