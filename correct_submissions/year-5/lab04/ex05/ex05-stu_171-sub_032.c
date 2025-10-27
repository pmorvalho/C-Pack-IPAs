
#include <stdio.h>

int leLinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
    }
    s[i] = '\0'; 
    return i;
}

int main() {
    char linha[100];
    leLinha(linha);
    printf("%s\n", linha);
    return 0;
}