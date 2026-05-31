
#include <stdio.h>
#include <ctype.h>
int leLinha(char s[]) {
    int c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
void maiusculas(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupper(s[i]); 
        i++;
    }
}

int main() {
    char linha[1000];
    leLinha(linha);
    maiusculas(linha);
    printf("%s\n", linha);
    return 0;
}