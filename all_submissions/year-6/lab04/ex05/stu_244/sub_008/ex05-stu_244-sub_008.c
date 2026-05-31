
#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[MAX]) {
    int tamanho=0, c;
    c=getchar();
    while(c!='\n' && c!=EOF){
        s[tamanho++] = c;
        c = getchar();
    }
    s[tamanho]='\0';
    return tamanho;
}   

int main() {
    char linha[MAX];
    leLinha(linha);
    printf("%s", linha);
    return 0;
}