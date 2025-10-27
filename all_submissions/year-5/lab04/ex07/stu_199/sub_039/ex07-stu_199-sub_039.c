


#include <stdio.h>

int le_linha(char s[]) {
    int i = 0;
    char c = getchar();

    while (c != '\n' && c != EOF) {
        s[i] = c;
        i++;
        c = getchar();
    }   
    s[i] = '\0';

    return i;
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
    char linha[100];
    char c;

    int n_carcteres = le_linha(linha);

    if (n_carcteres > 0) {
        c = getchar();
        apagaCaracter(linha, c);
        printf("%s\n", linha);
    } else{
        printf("Linha vazia\n");
    }

    return 0;
}