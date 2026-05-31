
#include <stdio.h>
#include <string.h>
#define MAX 80
#define DIFERENCA 32

void maiusculas(char s[]) {
    int i, c, tamanho=0;
    c=getchar();
    while(c!='\n' && c!=EOF){
        s[tamanho++] = c;
        c = getchar();
    }
    s[tamanho]='\0';
    for(i=0;i<tamanho;i++) {
        if (s[i]>='a' && s[i]<='z')
            s[i]-=DIFERENCA;
    }
}

int main() {
    char linha[MAX];
    maiusculas(linha);
    printf("%s", linha);
    putchar('\n');
    return 0;
}