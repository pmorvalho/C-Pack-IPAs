
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

void maiusculas(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}

int main() {
    char linha[100];
    leLinha(linha);
    maiusculas(linha);
    printf("%s\n", linha);
    return 0;
}