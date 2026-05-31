
#include<stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF && i < MAX - 1) {
        s[i] = c;
        i++;
    }

    s[i] = '\0';  
    return i;     
}

void apagaCaracter(char s[], char c) {
    int i, j = 0;

    for (i = 0; s[i] != '\0'; i++) {

        if (s[i] != c) {

            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';
}

int main() {
    char linha[MAX];
    char alvo;

    leLinha(linha);

    scanf(" %c", &alvo);

    apagaCaracter(linha, alvo);

    printf("%s\n", linha);

    return 0;
}