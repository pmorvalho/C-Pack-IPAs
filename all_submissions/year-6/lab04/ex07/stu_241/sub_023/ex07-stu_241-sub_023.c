
#include <stdio.h>
#include <string.h>
#define MAX 80

void apagacarater(char s[], char c){
    int i, len=strlen(s), j=0;
    for (i=0; i<len; i++)
        if (s[i]!=c){
            s[j]=s[i];
            j++;
        }
    s[j]='\0';
}


int main(){
    char linha[MAX], c;
    fgets(linha, MAX, stdin);
    scanf("%c",&c);
    apagacarater(linha,c);
    printf("%s",linha);
    return 0;
}