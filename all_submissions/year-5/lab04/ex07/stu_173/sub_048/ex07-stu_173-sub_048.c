

#include <stdio.h>
#include <string.h>

#define MAX 80

void apagaCaracter(char s[], char c);
void moveCaracteres(char s[], int posicao);
int leLinha(char s[]);

int main() {
    char c, s[MAX];

    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s, c);
    
    printf("%s\n", s);
    return 0;
}

void apagaCaracter(char s[], char c) {
    int len = strlen(s);

    for (int i = len - 1; i > 0; i--) {
        if (s[i] == c) {
            moveCaracteres(s, i);
        }
    }
}

void moveCaracteres(char s[], int posicao) {
    for (int i = posicao; s[i] != '\0'; i++)
        s[i] = s[i + 1];
}

int leLinha(char s[]) {
    int len, c, i = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\0')
            break;
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    len = strlen(s);
    return len;
}