
#include <stdio.h>
#include <string.h>
#define MAX 80

void apagaCaracter(char s[], char let){
    int i, j = 0, len;
    len = strlen(s);

    for (i = 0; i < len; i++){
        if (s[i] != let){
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

int main(){
    char linha[MAX], c;
    fgets(linha, MAX, stdin);
    scanf("%c", &c);

    apagaCaracter(linha, c);
    printf("%s", linha);

    return 0;
}