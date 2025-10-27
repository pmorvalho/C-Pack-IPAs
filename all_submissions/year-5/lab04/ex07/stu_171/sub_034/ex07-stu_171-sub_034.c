
# include <stdio.h>

void leLinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
    }
    s[i] = '\0'; 
}

void apagaCaracter(char s[], char c) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}

int main() {
    char linha[100], c;
    leLinha(linha);
    scanf("%c", &c);
    apagaCaracter(linha, c);
    printf("%s\n", linha);
    return 0;
}