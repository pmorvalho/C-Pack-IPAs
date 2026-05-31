
#include <stdio.h>
int leLinha(char s[]) {
    int c, j = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        s[j] = c;
        j++;
    }
    s[j] = '\0';
    return j;
}
void apagaCaracter(char s[], char c) {
    int wr = 0, re = 0;
    while (s[re] != '\0') {
        if (s[re] != c) {
            s[wr] = s[re];
            wr++;
        }
        re++;
    }
    s[wr] = '\0';
}
int main() {
    char linha[500], caracterAapagar;
    leLinha(linha);
    caracterAapagar = getchar();
    apagaCaracter(linha, caracterAapagar);
    printf("%s\n", linha);
    return 0;
}