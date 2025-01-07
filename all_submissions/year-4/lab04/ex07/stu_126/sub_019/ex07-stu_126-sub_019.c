
#include <stdio.h>
#include <string.h>


void apagaCaracter(char s[], char c) {
    int i, j;

    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int main() {
    char linha[100];
    char caractere;

    
    fgets(linha, sizeof(linha), stdin);   

    
    scanf("%c", &caractere);

    
    apagaCaracter(linha, caractere);

    
    printf("%s\n", linha);

    return 0;
}
