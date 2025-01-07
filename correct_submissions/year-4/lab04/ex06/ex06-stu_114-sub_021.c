
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 80

int leLinha(char s[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

void maiusculas(char s[MAX_LENGTH]) {

    int i = 0;
    int tamanho = strlen(s);

    while (i < tamanho) {
        s[i] = toupper(s[i]); 
        i++;
    }
}

int main() {

    char s[MAX_LENGTH];

    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);

    return 0;
}