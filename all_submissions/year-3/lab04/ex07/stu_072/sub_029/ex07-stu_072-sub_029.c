

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[MAX]) {

    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && strlen(s) < MAX) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c) {

    int i, j;
    for (i = 0, j = 0; s[i] != '\0'; i++) {
        
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

int main() {

    char linha[MAX], c;

    leLinha(linha);

    scanf("%c", &c);
    apagaCaracter(linha, c);
    
    printf("%s\n", linha);
    return 0;
}