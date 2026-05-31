

#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c) {
    int i;
    int j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}


int main() {
    char texto[MAX];
    char alvo;
    leLinha(texto);
    scanf("%c", &alvo);
    apagaCaracter(texto, alvo);
    printf("%s\n", texto);
    return 0;
}