
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 80

void maiusculas(char s[MAX_LENGTH]) {

    int i = 0;
    fgets(s, MAX_LENGTH, stdin);
    int tamanho = strlen(s);


    while (i < tamanho - 1) {
        s[i] = toupper(s[i]); 
        i++;
    }

    printf("%s", s);
}

int main() {
    char s[MAX_LENGTH];
    maiusculas(s);
    return 0;
}