

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[MAX]) {

    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && strlen(s) < MAX) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main() {

    char linha[MAX];

    leLinha(linha);
    
    printf("%s\n", linha);
    return 0;
}