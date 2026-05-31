
#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter(char s[], char c) {
    int tamanho, i, j=0;
    tamanho=strlen(s);
    for(i=0; i<tamanho;i++) {
        if (s[i]!=c) {
            s[j]=s[i];
            j++;
        }
    }
    for(j;j<tamanho;j++)
        s[j]='\0';
}

int main() {
    int c, tamanho=0;
    char linha[MAX], caracter;
    c=getchar();
    while(c!='\n'){
        linha[tamanho++] = c;
        c = getchar();
    }
    linha[tamanho]='\0';
    scanf("%c", &caracter);
    apagaCaracter(linha, caracter);
    printf("%s", linha);
    return 0;
}